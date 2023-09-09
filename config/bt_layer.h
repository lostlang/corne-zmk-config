// ------------------------------------------------------------------------------
//| BLDR |     |     |     |     |     |   |     |     |     |     |     | BLDR |
//| BTCLR| BT0 | BT1 | BT2 | BT3 | BT4 |   | BT4 | BT3 | BT2 | BT1 | BT0 | BTCLR|
//|pwrOFF|NUMLK|     |     |     |     |   |     |     |     |     |     |      |
//                   |     |     |     |   |     |     |     |

#define BtL1 &bootloader        &none         &none         &none         &none        &none          &none         &none         &none         &none         &none         &bootloader
#define BtL2 &bt BT_CLR         &bt BT_SEL 0  &bt BT_SEL 1  &bt BT_SEL 2  &bt BT_SEL 3 &bt BT_SEL 4   &bt BT_SEL 4  &bt BT_SEL 3  &bt BT_SEL 2  &bt BT_SEL 1  &bt BT_SEL 0  &bt BT_CLR
#define BtL3 &ext_power EP_OFF  &kp KP_NUM    &none         &none         &none        &none          &none         &none         &none         &none         &none         &ext_power EP_OFF
#define BtL4                                                &trans        &none        &none          &none         &none         &trans
