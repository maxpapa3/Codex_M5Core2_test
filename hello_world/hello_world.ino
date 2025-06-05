#include <M5Unified.h>

void setup() {
  M5.begin();
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(10, 10);
  M5.Lcd.print("Hello World!");
}

void loop() {
  // nothing to do here
}
