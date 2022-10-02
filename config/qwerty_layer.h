// .-----------------------------------------------.       .-----------------------------------------------.
// |   `   | Q/COL |   W   |   E   |   R   |   T   |       |   Y   |   U   |   I   |   O   |   P   |   \   |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// |  Tab  |   A   |   S   |   D   |   F   |   G   |       |   H   |  J/BT |   K   |   L   |   ;   |   '   |
// |-------+-------+-------+-------+-------+-------|       |-------+-------+-------+-------+-------+-------|
// | [/SHFT|  Z/FN | X/NUM |   C   | V/NAV |   B   |       |   N   |   M   |   ,   |   .   |   /   | ]/SHFT|
// '-----------------------+-------+-------+-------|       |-------+-------+-------+-----------------------'
//                         |ESC/GUI|ENT/ALT|SPC/CTR|       |BSP/CTR| -/ALT | =/GUI |
//                         '-------+-------+-------'       '-------+-------+-------'

#define QwertyL1 &kp GRAVE                &tt 0 Q  &kp W    &kp E         &kp R         &kp T           /**/ &kp Y           &kp U           &kp I           &kp O    &kp P     &kp BSLH
#define QwertyL2 &kp TAB                  &kp A    &kp S    &kp D         &kp F         &kp G           /**/ &kp H           &lt 4 J         &kp K           &kp L    &kp SEMI  &kp SQT
#define QwertyL3 &mt LSHIFT LEFT_BRACKET  &lt 2 Z  &lt 1 X  &kp C         &lt 3 V       &kp B           /**/ &kp N           &kp M           &kp COMMA       &kp DOT  &kp FSLH  &mt RSHIFT RIGHT_BRACKET
#define QwertyL4                                            &mt LGUI ESC  &mt LALT RET  &mt LCTRL SPACE /**/ &mt LCTRL BSPC  &mt LALT MINUS  &mt LGUI EQUAL