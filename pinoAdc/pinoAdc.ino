const int pinLed1 = 4;
const int pinLed2 = 22;
const int pinPot = 2;
const int freq = 1000;
const int led1Channel = 1;
const int led2Channel = 2;
const int resolution = 8;

void setup() {
  ledcSetup(led1Channel, freq, resolution);
  ledcSetup(led2Channel, freq, resolution);
  ledcAttachPin(pinLed1, led1Channel);
  ledcAttachPin(pinLed2, led2Channel);

  Serial.begin(115200);
  analogReadResolution(8);

}
void loop() {
  int valorPot = analogRead(pinPot);
  Serial.println(valorPot);
  delay(50);
  acendeLed(valorPot);
}
void acendeLed(int dutyCicle) {
  ledcWrite(led1Channel, dutyCicle);
  ledcWrite(led2Channel, dutyCicle);
}