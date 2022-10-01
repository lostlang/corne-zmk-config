// .-----------------------------------------------.       .-----------------------------------------------.
// |       |       |       |       |       |       |       |       |       |       |       |       |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       | LEFT  |  UP   | DOWN  | RIGHT |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       |       |       |       |       |       |
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                       |        |        |       |       |       |       |       |
//                         '-------+-------+-------'       '-------+-------+-------'

#define ArrowL1 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define ArrowL2 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans  &LEFT   &UP     &DOWN   &RIGHT  &trans
#define ArrowL3 &trans  &trans  &trans  &trans  &trans  &trans /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define ArrowL4                         &trans  &trans  &trans /**/ &trans  &trans  &trans

