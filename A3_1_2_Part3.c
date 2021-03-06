
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
  Project Title: Basic Outputs Programming, Part 3
  Team Members: Joseph
  Date: 2018-04-7
  Section: 3.1.2
  Pseudocode: Meh.

*/

  //All defined for the testbed, but aren't all used, because because.
  

task main()
{
  while(1){
      startMotor(motorLeft,50);
      waitInMilliseconds(5000);
      stopMotor(motorLeft);
      startMotor(motorRight,75);
      waitInMilliseconds(2500);
      stopMotor(motorRight);
      waitInMilliseconds(100);
      startMotor(motorLeft,100);
      startMotor(motorRight,100);
      waitInMilliseconds(7250);
      stopAllMotors();

  }
}