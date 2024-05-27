const int sensor = T3; //GPIO 15
const int pinLed1 = 4;
const int pinLed2 = 22;
 
void setup() {
  Serial.begin(115200);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
}
 
void loop() {
  int valorSensor = touchRead(sensor); // Retorne o valor Touch5
  Serial.println(valorSensor);  
  
  if(valorSensor < 60 )
  {
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
  }
  else{
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed1, LOW);
  }
  delay(50);
}