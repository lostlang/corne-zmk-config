// .-----------------------------------------------.       .-----------------------------------------------.
// |       |VOL DN | MUTE  |       |VOL UP |       |       |       |       |       |       |       |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       | PREV  | PL/PS |       | NEXT  |       |       |       |       |       |       |       |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |  TOG  |       |       |       |       |       |       |       |       |       |       |       |       |
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                         |       |       |       |       |       |       |       |
//                         '-----------------------'       '-----------------------'

#define MediaL1 &trans   &kp C_VOL_DN  &kp C_MUTE  &trans  &kp K_VOL_UP  &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define MediaL2 &trans   &kp C_PREV    &kp C_PP    &trans  &kp C_NEXT    &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define MediaL3 &tog 11  &trans        &trans      &trans  &trans        &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define MediaL4                                    &trans  &trans        &trans /**/ &trans  &trans  &trans
