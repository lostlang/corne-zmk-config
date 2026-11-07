// Left
// |       |     |     |     |     |     |
// | BTCLR | BT0 | BT1 | BT2 | BT3 | BT4 |
// |       |     |     |     |     |     |
//                     |     |     |     |

#define BluetoothL1Left  &none       &none         &none         &none         &none         &none
#define BluetoothL2Left  &bt BT_CLR  &bt BT_SEL 0  &bt BT_SEL 1  &bt BT_SEL 2  &bt BT_SEL 3  &bt BT_SEL 4
#define BluetoothL3Left  &none       &none         &none         &none         &none         &none
#define BluetoothL4Left  &none       &none         &none

// Right
// | TRANS |   |   |   |   |   |
// |       |   |   |   |   |   |
// |       |   |   |   |   |   |
// |       |   |   |

#define BluetoothL1Right  &trans  &none  &none  &none  &none  &none
#define BluetoothL2Right  &none   &none  &none  &none  &none  &none
#define BluetoothL3Right  &none   &none  &none  &none  &none  &none
#define BluetoothL4Right  &none   &none  &none
