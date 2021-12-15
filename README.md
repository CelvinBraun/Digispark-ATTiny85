# Digispark-ATTiny85
---
This is my repo for projects regarding the Digispark (ATTiny85). 
---
Short instructions (for Windows):
1. Arduino IDE needed [Download](https://www.arduino.cc/en/software)
2. Install Digistump driver (DPinst.exe=32bit|DPinst64.exe=64bit) [Download](https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip) | [Repo](https://github.com/digistump/DigistumpArduino)
3. Add "http://digistump.com/package_digistump_index.json" to "Additional Boards Manager URL"
---
Keyboard Layouts
-> German [DigiKeyboardDe.h](https://raw.githubusercontent.com/adnanonline/DigistumpArduinoDe/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboardDe.h) | [Repo](https://github.com/adnan-alhomssi/DigistumpArduinoDe)

To add a keyboard layout, you need to import it in your code: #include "DigiKeyboardDe.h". Needs to be in the same path as the ".ino" files.
---
