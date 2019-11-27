int red[12];
int green[12];
int blue[12];

for(int a=0; a<12; a+=3) 
{
    red[a]=a;
    green[a]=a+1;
    green[a]=a+2;
}

void setup() 
{
  for(int a=0; a<12; a++) 
  {
    pinMode(red[a], OUTPUT);
    pinMode(green[a], OUTPUT);
    pinMode(blue[a], OUTPUT);
  }
}
int spawn()
{
  randomize()
  ch=random(12)
  return ch 
}
void loop() 
{
  int sqno=spawn(), rxntime=2000;
  digitalWrite(blue[sqno], 255);
  delay(rxntime);
  digitalWrite(green[sqno], 255);
  delay(rxntime);
  digitalWrite(red[sqno], 255);
  delay(rxntime);
}
