#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN 48
#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setColor(int r, int g, int b) {
  pixels.setPixelColor(0, pixels.Color(r, g, b));
  pixels.show();
}

void setup() {
  pixels.begin();
}

void loop() {
  setColor(0, 255, 0); // green
  delay(500);

  setColor(0, 0, 255); // blue
  delay(500);

  setColor(255, 0, 0); // red
  delay(500);
}