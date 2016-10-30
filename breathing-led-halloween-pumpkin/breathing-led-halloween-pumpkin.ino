#include "FastLED.h"
#define NUM_LEDS 18

CRGB leds[NUM_LEDS];

void setup() {
  pinMode(3, OUTPUT);
  
  FastLED.addLeds<WS2812B, 3, GRB>(leds, NUM_LEDS);
  fill_solid((CRGB*)leds, 9, CHSV(21, 244, value(215)));
  FastLED.setDither(0);
  FastLED.setTemperature(Candle);
  
  Serial.begin(115200);
}

int value(int x) {
  return (-210*abs(sin(x*0.01)))+255;
}

void loop()  {
  static int x = 0;
  int v = value(x);
//  Serial.print(x);
//  Serial.print(" - ");
//  Serial.println(v);
  
  fill_solid((CRGB*)leds+9, 9, CHSV(21, 244, v));
  FastLED.show();

  // 254 seems to be max value
  if (v == 254) {
    delay(3000);
  }
  else {
    delay(30);
  }

  x++;
}
