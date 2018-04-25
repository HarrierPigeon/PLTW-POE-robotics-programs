
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
  Project Title: 3.1.3 Part 5
  Team Members: Joseph
  Date: 2018-04-24
  Section: 3.1.3
  Pseudocode: tickle a bunny.

*/




task main()


{
  int thresholdvalue;
  thresholdvalue = 1400;  //Put the threshold value here, plz.
  while(0==0) {
    /*
    Move the servo to position 127 until a dark object is detected.
    Move servo to position to -127
    */
    setServo(servo,127);
    untilDark(thresholdvalue,line);
    setServo(servo,-127);
    waitInMilliseconds(2000);

  }



}