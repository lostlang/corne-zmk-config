// -----------------------------------------   ----------------------------------------------
// | ESC | Q FN  |   W   |   F   |   P   |  B  |   | J BT|   L   |   U   |   Y   |   /   |  \  |
// | TAB |A PAUSE|R SCROL|S SHIFT|T INSER|  G  |   |  M  |N INSER|E SHIFT|I SCROL|O PAUSE|  ;  |
// |     |   =   |   Z   |   X   |   C   |  V  |   |  D  |   K   |   H   |   ,   |   .   |  -  |
//                       |  NAV  |  ENT  |SPACE|   | BSPC|  DEL  |  NUM  |


#define ColemakL1 &kp ESC  &lt 4 Q            &kp W             &kp F         &kp P         &kp B      /**/  &lt 1 J   &kp L         &kp U         &kp Y             &kp FSLH           &kp BSLH
#define ColemakL2 &kp TAB  &mt PAUSE_BREAK A  &mt SCROLLLOCK R  &mt LSHIFT S  &mt INSERT T  &kp G      /**/  &kp M     &mt INSERT N  &mt LSHIFT E  &mt SCROLLLOCK I  &mt PAUSE_BREAK O  &kp SEMI
#define ColemakL3 &none    &kp EQUAL          &kp Z             &kp X         &kp C         &kp V      /**/  &kp D     &kp K         &kp H         &kp COMMA         &kp DOT            &kp MINUS
#define ColemakL4                                               &mo 2         &kp RET       &kp SPACE  /**/  &kp BSPC  &kp DEL       &mo 3
