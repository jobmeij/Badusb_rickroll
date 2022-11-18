https://www.youtube.com/watch?v=dQw4w9WgXcQ
 #include <Keyboard.h>
#include <KeyboardLayout.h>

/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

// Set board to arduino micro


#include "Keyboard.h"
//#include "HID-Project.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  Keyboard.write(0x80);

  // Wait 500ms
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("https://www.youtube.com/watch?v=dQw4w9WgXcQ"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F(" "));

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
