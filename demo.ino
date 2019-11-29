#include<CapacitiveSensor.h>
#include<FastLED.h>

#define   num_leds= 75;
#define ledPin= 7;

CapacitiveSensor cs[4];
CRGB led[num_leds];

for(int i=2;i<6;i++)
{
  cs[i]=CapacitiveSensor(1,i);
}
void setup()
{
  for(int j=0;j<4;J++)
    cs[i].set_CS_AutocaL_Millis(0xFFFFFFFF); 
  FastLED.addLeds<WS2812, ledPin, GRB>(leds, num_leds);
