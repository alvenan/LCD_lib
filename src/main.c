#include "oled.h"

void main() {
        OLED_Init();   // initialize the OLED
        OLED_Clear();  // clear the display (for good measure)

        while (1) {
                OLED_SetCursor(0, 0);  // set the cursor position to (0, 0)
                OLED_Printf("Hello World!");  // Print out some text
        }
}