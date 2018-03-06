#include <Servo.h>
Servo amine;

byte led;

int joyx= 0;
int joyy= 1;

int joyval; 




void setup() {
  amine.attach(3);
  
  for(byte n=4; n<13;n++){
     pinMode(n , OUTPUT);
  
  }
  

}

void loop() {
  joyval = analogRead(joyx);
  joyval = map(joyval, 0, 1023, 0, 180);
  amine.write(joyval);

  joyval = analogRead(joyy);
  led = map(joyval, 0, 1023, 4, 12);

  digitalWrite(led, 1);
  delay(10);
  digitalWrite(led, 0);

  
  delay(15);

}
