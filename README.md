# 🌈 ESP32 NeoPixel RGB Controller

A simple ESP32 project to control a NeoPixel RGB LED using the Adafruit NeoPixel library.
Built using **PlatformIO**, this project demonstrates basic LED control, timing, and RGB manipulation.
---

## 🚀 Features

* RGB LED color control (Red, Green, Blue)
* Clean and reusable `setColor()` function
* Runs on ESP32
* Built with PlatformIO (VSCode)
---

## 🛠 Tech Stack

* C++ (Arduino Framework)
* ESP32
* PlatformIO
* Adafruit NeoPixel Library
---

## 📦 Dependencies

Install via `platformio.ini`:

```ini
lib_deps =
    adafruit/Adafruit NeoPixel
```
---

## ⚙️ Configuration

```cpp
#define PIN 48
#define NUMPIXELS 1
```

* `PIN` → GPIO used for the NeoPixel
* `NUMPIXELS` → number of LEDs (currently 1)
---

## 💻 Code Overview

* `setColor(r, g, b)` → sets the LED color
* `loop()` → cycles through colors every 500ms
---

## ▶️ Running the Project

```bash
pio run
pio run --target upload
pio device monitor
```
---

## 🎨 Behavior

The LED cycles through:

* Green
* Blue
* Red

Each color is displayed for 500ms.
---

## 🧠 Example Output Logic

```cpp
setColor(0, 255, 0); // Green
setColor(0, 0, 255); // Blue
setColor(255, 0, 0); // Red
```
---

## 🚀 Future Improvements

* Smooth color transitions (fade)
* Brightness control
* Serial commands for dynamic colors
* Multiple LEDs (strip support)
---

## 👨‍💻 Author

**Benj**
Backend developer exploring embedded systems & hardware 🚀
---

## 📌 Notes

* Make sure your ESP32 supports the selected GPIO
* NeoPixel requires stable power for correct behavior
* Timing is controlled using `delay()` for simplicity
---
