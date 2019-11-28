#include<CapacitiveSensor.h>

struct Lights:
{
    int red;
    int green;
    int blue;

}led[12];

CapacitveSensor cs[12];

for(int i=0,pin=22;i<12;i++,pin+=3)
{
    led[i].red=pin;
    led[i].green=pin+1;
    led[i].blue=pin+2;
}

int j;

for(i=0,j=2;i<12;i+=1,j+=1)
{
    cs[i]=CapacitiveSensor(1,j);
}

void setup()
{
    for(int i=0;i<12;i+=1)
    {
        cs[i].set_CS_AutocaL_Millis(0xFFFFFFFF);
        pinMode(led[i].red,OUTPUT);
        pinMode(led[i].green,OUTPUT);
        pinMode(led[i].blue,OUTPUT);
        Serial.begin(9600);
    }
 }
 int capPressed(long total)
 {
    if(total>=threshold)
        return 1;
    else
        return 0;
 }
 
void changeColour(p,ans)
{
    if(ans==1)
    {
        digitalWrite(led[p].red,LOW);
        digitalWrite(led[p].green,HIGH);
        digitalWrite(led[p].blue,LOW);
    }
    else if(ans==0)
    {
        digitalWrite(led[p].red,HIGH);
        digitalWrite(led[p].green,LOW);
        digitalWrite(led[p].blue,LOW);
    }
    else
    {
        digitalWrite(led[p].red,HIGH);
        digitalWrite(led[p].green,HIGH);
        digitalWrite(led[p].blue,LOW);
    }
}

void spawn(curr)
{
    randomize();
    ch=random(12);
    if(ch!=curr)
    {
        changeColour(ch,2);
    }
    
void loop()
 {
    long start=millis();
    long total[12];
    for(int i=0;i<12;i++)
    {
        total[i]=cs[i].capacitiveSensor(30);
    }
    Serial.print(millis()-start);
    int p=0;
    for(int i=0;i<12;i++)
    {
        int res=capPressed(total[i]);
        if(res)
        {
            p=i;
            break;
        }
    }
    if(p==target)
    {
        changeColour(p,1);
    }
    else 
    {
        changeColour(p,0);
    }
    
            
 
 
 
