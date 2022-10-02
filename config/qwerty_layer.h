// .-----------------------------------------------.       .-----------------------------------------------.
// |   `   | Q/COL |   W   |   E   |   R   |   T   |       |   Y   |   U   |   I   |   O   |   P   |   \   |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |  Tab  |  A/FN | S/NUM | D/SHFT| F/NAV |   G   |       |   H   |  J/BT | K/SHFT|   L   |   ;   |   '   |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |   [   |   Z   |   X   |   C   |   V   |   B   |       |   N   |   M   |   ,   |   .   |   /   |   ]   |
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                         |ESC/GUI|ENT/ALT|SPC/CTR|       |BSP/CTR| -/ALT | =/GUI |
//                         '-------+-------+-------'       '-------+-------+-------'

#define QwertyL1 &kp GRAVE         &tt 5 Q  &kp W    &kp E         &kp R         &kp T           /**/ &kp Y           &kp U           &kp I           &kp O    &kp P     &kp BSLH
#define QwertyL2 &kp TAB           &lt 2 A  &lt 1 S  &mt LSHIFT D  &lt 3 F       &kp G           /**/ &kp H           &lt 4 J         &mt RSHIFT K    &kp L    &kp SEMI  &kp SQT
#define QwertyL3 &kp LEFT_BRACKET  &kp Z    &kp X    &kp C         &kp V         &kp B           /**/ &kp N           &kp M           &kp COMMA       &kp DOT  &kp FSLH  &kp RIGHT_BRACKET
#define QwertyL4                                     &mt LGUI ESC  &mt LALT RET  &mt LCTRL SPACE /**/ &mt LCTRL BSPC  &mt LALT MINUS  &mt LGUI EQUAL
