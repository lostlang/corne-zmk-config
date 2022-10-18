// .-----------------------------------------------.       .-----------------------------------------------.
// |       |       |       |       |       |       |       | PSCRN |       |       |       |       |  DEL  |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       |  LEFT |  DOWN |   UP  | RIGHT |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       |       |       |       |       |  TOG  |
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                         |       |       |       |       |  BSP  |       |       |
//                         '-----------------------'       '-----------------------'

#define NavL1 &trans  &trans  &trans  &trans  &trans  &trans /**/ &kp PSCRN  &trans    &trans    &trans  &trans     &kp DEL
#define NavL2 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans     &kp LEFT  &kp DOWN  &kp UP  &kp RIGHT  &trans
#define NavL3 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans     &trans    &trans    &trans  &trans     &tog 10
#define NavL4                         &trans  &trans  &trans /**/ &kp BSPC   &trans    &trans

