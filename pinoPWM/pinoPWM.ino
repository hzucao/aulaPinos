const int pinLed1 = 4;
const int pinLed2 = 22;
const int freq = 1000;
const int led1Channel = 1;
const int led2Channel = 2;
const int resolution = 8;
void setup() {
  ledcSetup(led1Channel, freq, resolution);
  ledcSetup(led2Channel, freq, resolution);
  ledcAttachPin(pinLed1, led1Channel);
  ledcAttachPin(pinLed2, led2Channel);
}
void loop() {
  aumentaLed(led1Channel);
  diminuiLed(led2Channel);
  delay(2000);
  aumentaLed(led2Channel);
  diminuiLed(led1Channel);
  delay(2000);

}
void aumentaLed(int pledChannel) {
  for (int dutyCicle = 0; dutyCicle <= 255; dutyCicle++) {
    ledcWrite(pledChannel, dutyCicle);
    delay(5);
  }
}
void diminuiLed(int pledChannel) {
  for (int dutyCicle = 255; dutyCicle >= 0; dutyCicle--) {
    ledcWrite(pledChannel, dutyCicle);
    delay(5);
  }
}
