{
  description = "Local ZMK build environment";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

    treefmt-nix = {
      url = "github:numtide/treefmt-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    zephyr-nix = {
      url = "github:nix-community/zephyr-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };

  outputs =
    {
      self,
      nixpkgs,
      systems,
      treefmt-nix,
      zephyr-nix,
      ...
    }:
    let
      eachSystem = nixpkgs.lib.genAttrs (import systems);

      treefmt_config = {
        projectRootFile = ".git/config";
        programs = {
          black.enable = true;
          nixfmt.enable = true;
        };
      };
      treefmtEval = eachSystem (
        system: treefmt-nix.lib.evalModule (import nixpkgs { inherit system; }) treefmt_config
      );
    in
    {
      formatter = eachSystem (system: treefmtEval.${system}.config.build.wrapper);

      checks = eachSystem (system: {
        formatting = treefmtEval.${system}.config.build.check self;
      });

      devShells = eachSystem (
        system:
        let
          pkgs = import nixpkgs { inherit system; };
          pkgsZephyr = zephyr-nix.lib.mkZephyr { inherit pkgs; };
          sdk = pkgsZephyr.sdks."0_17".sdk.override { targets = [ "arm-zephyr-eabi" ]; };
          python = pkgs.python3.withPackages (
            packages: with packages; [
              anytree
              canopen
              intelhex
              packaging
              patool
              progress
              psutil
              pyelftools
              pykwalify
              pylink-square
              pyserial
              pyyaml
              requests
              semver
              tqdm
              west
            ]
          );
          zmkBuild = pkgs.writeShellApplication {
            name = "zmk-build";

            runtimeInputs = with pkgs; [
              git
              cmake
              ninja
              python
              pkgsZephyr.hosttools-nix
              sdk
            ];

            text = /* sh */ ''
              export ZEPHYR_SDK_INSTALL_DIR=${nixpkgs.lib.escapeShellArg (toString sdk)}
              export ZEPHYR_TOOLCHAIN_VARIANT=zephyr

              exec ${nixpkgs.lib.getExe python} ${./script/build.py} \
                --west-executable ${nixpkgs.lib.getExe' python "west"} \
                --input-file "$PWD/build.yaml" \
                --config-dir "$PWD/config" \
                --workspace-dir "$PWD" "$@"
            '';
          };
        in
        {
          default = pkgs.mkShell {
            packages = [
              zmkBuild
              python
            ];
            ZEPHYR_SDK_INSTALL_DIR = "${sdk}";
            ZEPHYR_TOOLCHAIN_VARIANT = "zephyr";
          };
        }
      );
    };
}
