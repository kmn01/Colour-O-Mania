#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */
#define RedPin 22
#define GreenPin 28
#define BluePin 34

float threshold= 900

CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,2);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

void setup()                    
{
   cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
   pinMode(RedPin,OUTPUT);
   pinMode(GreenPin,OUTPUT);
   pinMode(BluePin,OUTPUT);
}

void loop()
{
    long start = millis();
    long total1 =  cs_4_2.capacitiveSensor(30);
    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.println(total1);  // print sensor output 1 - this is also the value you can use to use this in other projects
    
    if(total1>=threshold)     
    {
        for(r=255;r>=0;r--)   //changes led from yellow to green
        {
            analogWrite(RedPin,r);
            analogWrite(GreenPin,255);
            delay(fadeSpeed);
        }
    }
    else    //remains yellow
    {
        analogWrite(RedPin,255);
        analogWrite(GreenPin,255);
    }
  }
    
    
