# Digispark-ATTiny85
---

This is my repo for projects regarding the Digispark (ATTiny85). The instruction isn´t meant to be a perfect one. It should just help me to get back on track, when I forget something. :)

---

Short instructions (for Windows):
1. Arduino IDE needed: [Download](https://www.arduino.cc/en/software)
2. Install Digistump driver (DPinst.exe=32bit|DPinst64.exe=64bit): [Download](https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip) | [Repo](https://github.com/digistump/DigistumpArduino)
3. Add "http://digistump.com/package_digistump_index.json" to "Additional Boards Manager URL"

---

Keyboard Layouts

-> German: [DigiKeyboardDe.h](https://raw.githubusercontent.com/adnanonline/DigistumpArduinoDe/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboardDe.h) | [Repo](https://github.com/adnan-alhomssi/DigistumpArduinoDe)

To add a keyboard layout, you need to import it in your code: #include "DigiKeyboardDe.h". Needs to be in the same path as the ".ino" files. An example is in the folder "hello_world.ino". Here you can see the exact structure, to be able to upload your code on your Digispark.

---

Code Example:

    #include "DigiKeyboardDe.h"  
    void setup() {  
      DigiKeyboardDe.sendKeyStroke(0);  
      DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);   
      DigiKeyboardDe.println("cmd");
      DigiKeyboard.delay(500); 
      DigiKeyboardDe.println("echo Hello World!");
    }  
    void loop() {  
    } 

---

How to upload: 

1. Open Arduino IDE and create your project.
2. Be sure you selected the right board. (Tools -> Board -> "Digispark (Default - 16mhz)"
3. To upload: Click the Upload Button in the Arduino IDE.
4. Wait! Arduino will now compile your code.
5. When the message: "Running Digispark Uploader... Plug in device now... (will timeout in 60 seconds)" appears, plug-in your Digispark!
6. When the upload was succesfull, the message: ">> Micronucleus done. Thank you!" will appear!

---

Errors I experienced:

Digispark doesn´t get recognized by your OS (this happend to a few clones from a different drop):\
A: I was able to fix this issue, when I used a USB-Hub. When you use a Digispark, with cable, try a different cable.

---
