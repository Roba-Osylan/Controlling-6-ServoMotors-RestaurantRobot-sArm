# Controlling-6-ServoMotors-RestaurantRobot-sArm
This project aims to design and program the circuit that control the movements of the robot's arms. Each arm contains three joints and each joint attached with a servo motor. So, a total of six servo motors will be controlled. Servo motors are wiedly used in robotic projects due to their ability of rotating with specific angles. These angles represent the position of the shoulder, the elbow and the wrist of each arm when the robot is powered. The project is made on Proteus 8 (see my previous repository to download the arduino library https://github.com/Roba-Osylan/Controlling-DC.Motors-L298-Arduino-Proteus). 

The circuit shown below is quite simple. The components used are: 
-Arduino Uno.
-6x Servo Motors.
-2x 5V battery one for the Arduino and the other for the servo motors (3 used in the simulation for organization porpuse).

![6 Servo Motors Circuit](https://user-images.githubusercontent.com/85955049/124138037-efe67080-da8e-11eb-9bdf-33ef75ace9c1.png)

#Code
The simple code (Controlling_6_Servos) used to control the servos by first including the servo.h library and then by defining the pins and initializing the servos by using the .attach() function. Finally, the loop() contain two for statements used to repeat the rotation of untill the condition is satisfied. To learn more about for statement see https://www.arduino.cc/reference/en/language/structure/control-structure/for/. The current angles defined on the code is 0 and 180 degrees, the servos will rotate from 0 to 180 then from 180 to 0. The rotation will start by the top servos (the shoulder of the robot), then by the middle servos (the elbows) finally the bottom servos (the wrists) will rotate.
