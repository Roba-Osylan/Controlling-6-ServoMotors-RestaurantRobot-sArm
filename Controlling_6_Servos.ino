#include <Servo.h> //include the servo library 
//Define the pins of each servo
#define pinServo1R 6 //right arm
#define pinServo2R 5
#define pinServo3R 3
#define pinServo4L 9 //left arm
#define pinServo5L 10
#define pinServo6L 11
//Create servo objects
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;
int angl = 0;
void setup() {
  //attach each servo with its defined pin
  Servo1.attach(pinServo1R);
  Servo2.attach(pinServo2R);
  Servo3.attach(pinServo3R);
  Servo4.attach(pinServo4L);
  Servo5.attach(pinServo5L);
  Servo6.attach(pinServo6L);
}

void loop() {

  for (angl = 0; angl <= 180; angl += 1)
  {
  //Rotate the servos with initial angle of 90 degree
  Servo1.write(angl); //the top rhight and left servos
  Servo4.write(angl);
  delay(1500);      //wait for 1.5 s
  Servo2.write(angl); //the middle rhight and left servos
  Servo5.write(angl);
  delay(1500);      //wait for 1.5 s
  Servo3.write(angl); // the buttom rhight and left servos
  Servo6.write(angl);
  delay(1500);      //wait for 1.5 s
  }
  for (angl = 180; angl >= 0; angl -=1)
  {
  Servo1.write(angl); //the top rhight and left servos
  Servo4.write(angl);
  delay(1500);      //wait for 1.5 s
  Servo2.write(angl); //the middle rhight and left servos
  Servo5.write(angl);
  delay(1500);      //wait for 1.5 s
  Servo3.write(angl); // the buttom rhight and left servos
  Servo6.write(angl);
  delay(1500);      //wait for 1.5 s
  }
}
