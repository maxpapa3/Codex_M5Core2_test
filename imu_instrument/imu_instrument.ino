#include <M5Core2.h>

float prevAccX = 0.0f;
float prevAccY = 0.0f;
float prevAccZ = 0.0f;

void setup() {
  M5.begin();
  M5.IMU.Init();
  M5.Speaker.begin();
  M5.Lcd.setTextSize(2);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setCursor(10, 10);
  M5.Lcd.println("Shake to play");
}

void loop() {
  float accX, accY, accZ;
  M5.IMU.getAccelData(&accX, &accY, &accZ);

  float dx = accX - prevAccX;
  float dy = accY - prevAccY;
  float dz = accZ - prevAccZ;
  float delta = sqrtf(dx * dx + dy * dy + dz * dz);

  int freq = 440 + (int)(delta * 2000); // scale change to audible range
  freq = constrain(freq, 200, 2000);

  M5.Speaker.tone(freq);

  M5.Lcd.setCursor(10, 40);
  M5.Lcd.printf("Freq: %d Hz", freq);

  prevAccX = accX;
  prevAccY = accY;
  prevAccZ = accZ;

  delay(10);
}
