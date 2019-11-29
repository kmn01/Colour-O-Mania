#include <CapacitiveSensor.h>
#include <CapacitiveSensor.h>
#include <FastLED.h>
#define LED_PIN     7
#define NUM_LEDS    80
CRGB leds[NUM_LEDS];

CapacitiveSensor   cs_4_2 = CapacitiveSensor(2,4);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

void setup()                    
{
   cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);  // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
   FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
//int ctr=0;
void loop()                    
{   leds[0] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 1; i <= 18; i++) {
    leds[i] = CRGB ( 0, 0, 255 );
    FastLED.show();
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
    long start = millis();
    long total1 =  cs_4_2.capacitiveSensor(30);

    Serial.print(millis() - start);        // check on performance in milliseconds

    Serial.println(total1);  // print sensor output 1 - this is also the value you can use to use this in other projects
    if(total1>150)
    {leds[0] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 1; i <= 18; i++) {
    leds[i] = CRGB ( 50, 0, 200 );
    FastLED.show();
  }
  leds[19] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 20; i <= 37; i++) {
    leds[i] = CRGB ( 255, 255, 255);
    FastLED.show();
  } 
  leds[38]=CRGB(0,0,0);
  FastLED.show();
  for (int i = 39; i <= 56; i++) {
    leds[i] = CRGB ( 0, 100, 100);
    FastLED.show();
  }
  leds[57] = CRGB(0,0,0);
  FastLED.show();
  for (int i = 58; i<=75;i++)
  {
    leds[i] = CRGB(0,255,0);
    FastLED.show();
  }
}
    delay(100);                             // arbitrary delay to limit data to serial port 
    //ctr+=1;
}
