// Left
// |   |      |     |       | PSCRN |   |
// |   | META | ALT | SHIFT | CTRL  |   |
// |   |      |     |       |       |   |
//                  | TRANS |       |   |

#define NavL1Left  &none   &none         &none        &none       &kp PSCRN     &none
#define NavL2Left  &none   &kp MOD_META  &kp MOD_ALT  &kp LSHIFT  &kp MOD_CTRL  &none
#define NavL3Left  &none   &none         &none        &none       &none         &none
#define NavL4Left  &trans  &none         &none

// Right
// |      | HOME | PGDN | PGUP | END   |      |
// |      | LEFT | DOWN | UP   | RIGHT |      |
// | PLAY | PREV | VOL− | VOL+ | NEXT  | MUTE |
// |      |      |      |

#define NavL1Right  &none     &kp HOME    &kp PG_DN     &kp PG_UP     &kp END     &none
#define NavL2Right  &none     &kp LEFT    &kp DOWN      &kp UP        &kp RIGHT   &none
#define NavL3Right  &kp C_PP  &kp C_PREV  &kp C_VOL_DN  &kp C_VOL_UP  &kp C_NEXT  &kp C_MUTE
#define NavL4Right  &none     &none       &none
