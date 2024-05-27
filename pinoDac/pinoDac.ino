const int pinLed1 =25;
const int pinLed2 =26;

void setup() { 
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
}

void loop() {
 aumentaLed(pinLed1);
 diminuiLed(pinLed2);
 delay(2000);
 aumentaLed(pinLed2);
 diminuiLed(pinLed1);
 delay(2000);
}

void aumentaLed(int pinDca)
{
  for(int i =0; i <=255; i++){
    dacWrite(pinDca, i);
    delay(5);
  }
}
void diminuiLed(int pinDca)
{
  for(int i =255; i >=0 ; i--){
    dacWrite(pinDca, i);
    delay(5);
  }
}