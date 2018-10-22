
const int analogInPin = A0;
const int LEDPin = 11;

int LDRValue = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("LDR= ");
  Serial.println(LDRValue);

  if(LDRValue < 350){
    digitalWrite(LEDPin,HIGH);
  }
  else{
    digitalWrite(LEDPin,LOW);
  }

  delay(10);
  

}
