// .-----------------------------------------------.       .-----------------------------------------------.
// |       |  BT1  |  BT2  |  BT3  |  BT4  |  BT5  |       |       |       |       |       |       |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |       |       |       |       |       |       |       |       |       |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// | BTCLR |       |       |       |       |       |       |       |       |       |       |       |       |
// '-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------'
//                         |       |       |       |       |       |       |       |
//                         '-------+-------+-------'       '-------+-------+-------'

#define SettingsL1 &trans      &bt BT_SEL 0  &bt BT_SEL 1  &bt BT_SEL 2  &bt BT_SEL 3  &bt BT_SEL 4 /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define SettingsL2 &trans      &trans        &trans        &trans        &trans        &trans       /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define SettingsL3 &bt BT_CLR  &trans        &trans        &trans        &trans        &trans       /**/ &trans  &trans  &trans  &trans  &trans  &trans
#define SettingsL4                                         &trans        &trans        &trans       /**/ &trans  &trans  &trans
