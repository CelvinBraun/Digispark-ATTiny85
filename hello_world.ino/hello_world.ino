#include "DigiKeyboardDe.h"  
void setup() {  
  DigiKeyboardDe.sendKeyStroke(0);  
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.println("cmd");
  DigiKeyboard.delay(500); 
  DigiKeyboardDe.println("echo Hello World!");
}  
void loop() {  
} 
