#include <Arduino.h>

#define BAUDRATE 57600

// ESP32 LOLIN32 configuration needs redefinition of RX1/TX1 pins to be able to handle Serial1.
// This is done in the platformio.ini.

void setup() {
  // initialize both serial ports:
  Serial.begin(BAUDRATE);
  Serial1.begin(BAUDRATE);
}

void loop() {
  // read from port 1, send to port 0:
  if (Serial1.available()) {
    int inByte = Serial1.read();
    Serial.write(inByte);
  }

  // read from port 0, send to port 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial1.write(inByte);
  }
}
