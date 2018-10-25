const int keyPin = 12; //the number of the key pin
const int ledPin = 13;//the number of the led pin

void setup()
{
  pinMode(keyPin,INPUT);//initialize the key pin as input 
  pinMode(ledPin,OUTPUT);//initialize the led pin as output
}

void loop()
{

  if(digitalRead(keyPin) ==HIGH )
  {
    digitalWrite(ledPin,HIGH);//turn on the led
  }
  else
  {
    digitalWrite(ledPin,LOW);//turn off the led
  }
}
