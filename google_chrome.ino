#include <Stepper.h>

Stepper mStep(2048, 4,6,5,7);

bool bs = HIGH;

void setup() {
  mStep.setSpeed(16);
  pinMode(3,INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  int a = analogRead(A5);
  if(a > 475){
    //Serial.println("not detect");
    
  }else if(a < 425){
    Serial.println("Detected");
    steper();
  }
  

}

void steper(){
  mStep.step(-140);
  mStep.step(140);
  
}
