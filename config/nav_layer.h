// .-----------------------------------------------.       .-----------------------------------------------.
// |       |       |       |       |       |       |       |       |       |       |       |       |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       |  LEFT |  DOWN |   UP  | RIGHT |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       |       |       |       |       |       |
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                       |        |        |       |       |       |       |       |
//                         '-------+-------+-------'       '-------+-------+-------'

#define NavL1 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define NavL2 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans  &kp LEFT  &kp DOWN  &kp UP  &kp RIGHT  &trans
#define NavL3 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define NavL4                         &trans  &trans  &trans /**/ &trans  &trans  &trans

