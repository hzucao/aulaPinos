const int pinLed1 = 4;
const int pinLed2 = 22;
void setup() {
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  Serial.begin(115200);
}
void loop() {
  digitalWrite(pinLed1, HIGH);
  digitalWrite(pinLed2, LOW);
  delay(5000);
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, HIGH);
  delay(5000);
}