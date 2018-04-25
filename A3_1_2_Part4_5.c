#pragma config(Sensor, in1,    line,           sensorLineFollower)
#pragma config(Sensor, in2,    pot,            sensorPotentiometer)
#pragma config(Sensor, in3,    light,          sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bump,           sensorTouch)
#pragma config(Sensor, dgtl3,  encodeLow,      sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonicIn,        sensorSONAR_inch)
#pragma config(Sensor, dgtl10, rLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, gLED,           sensorLEDtoVCC)
#pragma config(Motor,  port2,           motorRight,    tmotorNone, openLoop)
#pragma config(Motor,  port3,           motorLeft,     tmotorNone, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorNone, openLoop)


/*
  Project Title: Basic Outputs Programming, Part 4.5
  Team Members: Joseph
  Date: 2018-04-7
  Section: 3.1.2
  Pseudocode: Follow 3.1.2's procedures, specifically:
  Write a program that performs the following simple behaviors. Use the natural language functions where appropriate as shown below. Add comments at the end of each command line to explain the purpose of each step.
  | Program the servo to go to position –127 for 2 seconds.
  | Go to position –63 for 3 seconds.
  | Go to position 0 for 2 seconds.
  | Go position 63 for 3 seconds.
  | Go to position 127 for 2 seconds.

*/
task main()
{
  while(1){
    setServo(servoMotor,-127);  //goes to position -217
    wait(2);                    //waits 2 seconds
    setServo(servoMotor,-63);     //goes to position -63
    wait(3);                    //waits 3 seconds
    setServo(servoMotor,0);   //goes to position 0
    wait(2);                    //waits 2 seconds
    setServo(servoMotor,63);  //goes to position 63
    wait(3);                    //waits 3 seconds
    setServo(servoMotor,127);     //goes to position 217
    wait(2);                    //waits 2 seconds
  }



}