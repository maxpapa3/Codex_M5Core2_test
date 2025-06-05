#include <M5Core2.h>

void setup() {
  M5.begin();
  M5.IMU.Init();
  M5.Lcd.setTextSize(2);
  M5.Lcd.fillScreen(BLACK);
}

void loop() {
  float accX, accY, accZ;
  float gyroX, gyroY, gyroZ;
  float pitch, roll, yaw;

  M5.IMU.getAccelData(&accX, &accY, &accZ);
  M5.IMU.getGyroData(&gyroX, &gyroY, &gyroZ);
  M5.IMU.getAhrsData(&pitch, &roll, &yaw);

  M5.Lcd.setCursor(0, 0);
  M5.Lcd.clear();
  M5.Lcd.printf("Accel:\nX: %.2f\nY: %.2f\nZ: %.2f\n\n", accX, accY, accZ);
  M5.Lcd.printf("Gyro:\nX: %.2f\nY: %.2f\nZ: %.2f\n\n", gyroX, gyroY, gyroZ);
  M5.Lcd.printf("Pitch: %.2f\nRoll: %.2f\nYaw: %.2f", pitch, roll, yaw);

  delay(100);
}
