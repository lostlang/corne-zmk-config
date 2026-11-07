// Left
// | ESC | Q/FN   | W     | F       | P      | B     |
// | TAB | A/META | R/ALT | S/SHIFT | T/CTRL | G     |
// |     | =      | Z     | X       | C      | V     |
//                        | NAV     | ENTER  | SPACE |

#define ColemakL1Left  &kp ESC  &lt 4 Q         &kp W          &kp F         &kp P           &kp B
#define ColemakL2Left  &kp TAB  &mt MOD_META A  &mt MOD_ALT R  &mt LSHIFT S  &mt MOD_CTRL T  &kp G
#define ColemakL3Left  &none    &kp EQUAL       &kp Z          &kp X         &kp C           &kp V
#define ColemakL4Left  &mo 2    &kp RET         &kp SPACE

// Right
// | J/BT | L      | U       | Y     | /      | \ |
// | M    | N/CTRL | E/SHIFT | I/ALT | O/META | ; |
// | D    | K      | H       | ,     | .      | - |
// | BSPC | DEL    | NUM     |

#define ColemakL1Right  &lt 1 J   &kp L           &kp U         &kp Y          &kp FSLH        &kp BSLH
#define ColemakL2Right  &kp M     &mt MOD_CTRL N  &mt LSHIFT E  &mt MOD_ALT I  &mt MOD_META O  &kp SEMI
#define ColemakL3Right  &kp D     &kp K           &kp H         &kp COMMA      &kp DOT         &kp MINUS
#define ColemakL4Right  &kp BSPC  &kp DEL         &mo 3
