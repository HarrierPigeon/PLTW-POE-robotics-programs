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
  Project Title: 3.1.3 Part 6
  Team Members: Joseph
  Date: 2018-04-24
  Section: 3.1.3
  Pseudocode: tickle a bunny.

*/

// PART 6: USING THE ULTRASONIC SENSOR


task main() {
  int sonarCloseVal;
  sonarCloseVal = 20;
  int sonarFarVal;
  sonarFarVal = 25;
  int sonarCurrent;
  sonarCurrent = 100;
  int togglebit = 0;
  int forwardspeed = 120;
  int backwardspeed = -120;

  while(0==0) {
    sonarCurrent = SensorValue(sonicIn);
    If(sonarCurrent <= sonarCloseVal) {  // Code for closer than.
      startMotor(motorRight,forwardspeed);
      startMotor(motorLeft,forwardspeed);
      togglebit = 1;
    } else if (sonarCurrent >= SonarFarVal && togglebit == 1) {  //togglebit == 1 is there to make sure that it doesn't run the first time.  && is a short-circuiting operator.
      stopAllMotors();

    }



  }



}