#include<CapacitiveSensor.h>
#include<FastLED.h>

#define NUM_LEDS=75;

CRGB LedPin[4];
for(int i=0;i<4;i++)
  LedPin[i]=i;

CapacitiveSensor cs[12];
CRGB led[NUM_LEDS];

int j;
for(i=0,j=2;i<12;i+=1,j+=1)
{
    cs[i]=CapacitiveSensor(1,j);
}
void colourChange(int p, int ans)
{
  if(p==0 || p==1)
  {
    FastLED.addLeds<WS2812, LED_PIN[0], GRB>(leds, NUM_LEDS);
    switch(p)
    {
      case 0: if(ans==1)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(0,255,0);
                    FastLED.show();
                 }
              }
              else if(ans==0)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,0,0);
                    FastLED.show();
                 }
              }
              else
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,255,0);
                    FastLED.show();
                 }
              }
              break;
        case 1: if(ans==1)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }
  }
  else if(1<p && p<=5)
  {
    FastLED.addLeds<WS2812, LED_PIN[1], GRB>(leds, NUM_LEDS);
    switch(p)
    {
      case 2: if(ans==1)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(0,255,0);
                    FastLED.show();
                 }
              }
              else if(ans==0)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,0,0);
                    FastLED.show();
                 }
              }
              else
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,255,0);
                    FastLED.show();
                 }
              }
              break;
        case 3: if(ans==1)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }
        case 4: if(ans==1)
                {
                   led[38]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=39;i<=56;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[38]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=39;i<=56;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[38]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=39;i<=56;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }
                break;   
        case 5: if(ans==1)
                {
                   led[57]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=58;i<=75;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[57]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=58;i<=75;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[57]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=58;i<=75;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }   
    }
  }
  
  else if(6<=p && p<=9)
  {
    FastLED.addLeds<WS2812, LED_PIN[2], GRB>(leds, NUM_LEDS);
      switch(p)
    {
      case 6: if(ans==1)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(0,255,0);
                    FastLED.show();
                 }
              }
              else if(ans==0)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,0,0);
                    FastLED.show();
                 }
              }
              else
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,255,0);
                    FastLED.show();
                 }
              }
              break;
        case 7: if(ans==1)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }
        case 8: if(ans==1)
                {
                   led[38]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=39;i<=56;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[38]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=39;i<=56;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[38]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=39;i<=56;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }
                break;   
        case 9: if(ans==1)
                {
                   led[57]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=58;i<=75;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[57]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=58;i<=75;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[57]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=58;i<=75;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }         
  else
  {
    FastLED.addLeds<WS2812, LED_PIN[3], GRB>(leds, NUM_LEDS);
    case 10:   if(ans==1)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(0,255,0);
                    FastLED.show();
                 }
              }
              else if(ans==0)
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,0,0);
                    FastLED.show();
                 }
              }
              else
              {
                 led[0]=CRGB(0,0,0);
                 FastLED.show();
                 for(int i=1;i<=18;i++)
                 {
                    led[i]=CRGB(255,255,0);
                    FastLED.show();
                 }
              }
              break;
    case 11:   if(ans==1)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(0,255,0);
                      FastLED.show();
                   }
                }
                else if(ans==0)
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,0,0);
                      FastLED.show();
                   }
                }
                else
                {
                   led[19]=CRGB(0,0,0);
                   FastLED.show();
                   for(int i=20;i<=37;i++)
                   {
                      led[i]=CRGB(255,255,0);
                      FastLED.show();
                   }
                }
  }
    
void spawn(int ch)
{
  randomize();
  FastLED.addLeds<WS2812, LED_PIN[random(4)], GRB>(leds, NUM_LEDS);
  int new_ch=random{1,20,39,58};
  if(new_ch!=ch)
    return new_ch;
  else
    spawn(new_ch);
}
void setup()
{
    for(int i=0;i<12;i+=1)
        cs[i].set_CS_AutocaL_Millis(0xFFFFFFFF);
    Serial.begin(9600);
}
int p=0;
void loop()
{
  long start=millis();
  long total[12];
  for(int i=0;i<12;i++)
  {
    total[i]=cs[i].capacitiveSensor(30);
  }
  Serial.print(millis()-start);
  for(i=0;i<12;i++)
  {
    if(total[i]>=threshold)
    {
       p=i;
       break;
    }
    
  if(p==target)
  {
    changeColour(p,1);
    p=spawn(p);
    changeColour(p,2);
  }
  else
  {
    changeColour(p,0);
    exit();
  }
}
