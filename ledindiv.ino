    #include <FastLED.h>
#define LED_PIN     7
#define NUM_LEDS    80
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {

  leds[0] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 1; i <= 18; i++) {
    leds[i] = CRGB ( 0, 0, 255 );
    delay(500);
    FastLED.show();
    delay(500);
  }
  leds[19] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 20; i <= 37; i++) {
    leds[i] = CRGB ( 0, 255, 0);
    FastLED.show();
  } 
  leds[38]=CRGB(0,0,0);
  FastLED.show();
  for (int i = 39; i <= 56; i++) {
    leds[i] = CRGB ( 200, 0, 100);
    FastLED.show();
  }
  leds[57] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 58; i<=75;i++)
  {
    leds[i] = CRGB(255,255,255);
    FastLED.show();
  }
  
  
}
