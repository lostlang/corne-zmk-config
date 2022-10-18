// .-----------------------------------------------.       .-----------------------------------------------.
// |   `   | Q/QWE | W/QWE |   F   |   P   |   B   |       |   J   |   L   |   U   |   Y   |   ;   |   \   |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |  Tab  |  A/FN | R/NUM | S/SHFT| T/NAV |   G   |       |   M   |  N/BT | E/SHFT|I/MEDIA| O/CHAR|   '   |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |   [   |   Z   |   X   |   C   |   D   |   V   |       |   K   |   H   |   ,   |   .   |   /   |   ]   |
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                         |ESC/GUI|ENT/ALT|SPC/CTR|       |BSP/CTR| -/ALT | =/GUI |
//                         '-----------------------'       '-----------------------'

#define ColemakL1 &kp GRAVE      &kp Q    &kp W    &kp F         &kp P         &kp B           /**/ &kp J           &kp L           &kp U           &kp Y    &kp SEMI  &kp BSLH
#define ColemakL2 &kp TAB        &lt 3 A  &lt 2 R  &mt LSHIFT S  &lt 4 T       &kp G           /**/ &kp M           &lt 5 N         &mt RSHIFT E    &lt 6 I  &lt 7 O   &kp SQT
#define ColemakL3 &left_bracket  &kp Z    &kp X    &kp C         &kp D         &kp V           /**/ &kp K           &kp H           &kp COMMA       &kp DOT  &kp FSLH  &right_bracket
#define ColemakL4                                  &mt LGUI ESC  &mt LALT RET  &mt LCTRL SPACE /**/ &mt LCTRL BSPC  &mt LALT MINUS  &mt LGUI EQUAL

