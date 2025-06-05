# Codex_M5Core2_test

This repository contains Arduino sketches for the M5Core2 board.

* `hello_world` - displays a simple "Hello World" message.
* `imu_display` - reads IMU data (accelerometer, gyroscope and orientation) and shows the values on the screen.
* `imu_instrument` - plays tones whose frequency depends on changes in the accelerometer data.

## Building

1. Install the **M5Unified** library (which will also install its dependency **M5GFX**) in the Arduino IDE.
2. Open one of the example `.ino` files in the Arduino IDE (e.g. `hello_world/hello_world.ino` or `imu_display/imu_display.ino`).
3. Select the **M5Stack-Core2** board and the correct port.
4. Compile and upload the sketch to your device.
