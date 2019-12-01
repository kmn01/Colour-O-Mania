#include <FastLED.h>

#define LEDPIN[4]= {7,8,9,10};
#define NUMLEDS= 160;

CRGB leds[NUM_LEDS];
void setup() 
{
  FastLED.addLeds<WS2812, LEDPIN, GRB>(leds, NUMLEDS);
}

void loop()
{
  FastLED.addLeds<WS2812, LEDPIN[0], GRB>(leds, NUMLEDS);
  leds[0] = CRGB(0,0,0);
  FastLED.show();    
  for (int i = 1; i <= 18; i++) {           //first square blue
    leds[i] = CRGB ( 0, 0, 255 );
    FastLED.show();
  }
  FastLED.addLeds<WS2812, LEDPIN[1], GRB>(leds, NUMLEDS);
  leds[38]=(0,0,0);
  for(i=39;i<57;i++)
  {                                             //2nd square in the 2nd row yellow
    leds[i]=CRGB(255,255,0);
    FastLED.show();
  }
  delay(3000);
  
  FastLED.addLeds<WS2812, LEDPIN[0], GRB>(leds, NUMLEDS);
  for (int i = 1; i <= 18; i++) {
    leds[i] = CRGB ( 0, 0, 0 );                             /prev square no colour
    FastLED.show();
   }
  FastLED.addLeds<WS2812, LEDPIN[1], GRB>(leds, NUMLEDS);
  leds[38]=CRGB(0,0,0);
  for(i=39;i<57;i++)        //next square green colour
   {
    leds[i]=CRGB(0,255,0);
    FastLED.show();
  } 
  leds[19]=CRGB(0,0,0);
  for(i=20;i<38;i++)        //target square yellow colour
   {
    leds[i]=CRGB(255,255,0);
    FastLED.show();
  } 
   delay(3000);
 
  FastLED.addLeds<WS2812, LEDPIN[1], GRB>(leds, NUMLEDS);
  leds[38]=CRGB(0,0,0);
  for(i=39;i<57;i++)
  {
    leds[i]=CRGB(0,0,0);
    FastLED.show();
  } 
  leds[19]=CRGB(0,0,0);
  for(i=20;i<38;i++)        //next square green colour
   {
    leds[i]=CRGB(0,255,0);
    FastLED.show();
  } 
  FastLED.addLeds<WS2812, LEDPIN[0], GRB>(leds, NUMLEDS);
  for(i=58;i<75;i++)
  {
    leds[i]=CRGB(255,255,0);      //target square yellow colour
    FastLED.show();
  } 
  
  delay(3000);
  
  
  FastLED.addLeds<WS2812, LEDPIN[0], GRB>(leds, NUMLEDS);
  for(i=58;i<75;i++)
  {
    leds[i]=CRGB(255,0,0);      //next square red colour
    FastLED.show();
  } 
  
