
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
//Basic Testbed Setup, because it won't be changing for a good while.

/*
    3.1.3 Part 2.
    Joseph Robertson
    2018-04-14



*/




task main()
{
  while(0==0)
  {
    /*
      Wait for the bumper switch to be bumped. Note that a bump occurs when a switch is pressed and released but not pressed and held.
      Both motors turn on at half power until the sensor is bumped again.
      Both motors should then move in reverse at half power for 3.5 seconds.
      Both motors will stop.
    */
    untilBump(bump);
    startMotor(motorRight,63);
    startMotor(motorLeft,63);
    untilBump(bump);
    allMotorsOff();
    waitInMilliseconds(100);  // Not necessary, but used to keep the motors from wearing out.  Good practice, mainly.
    startMotor(motorRight,-63);
    startMotor(motorLeft,-63);
    waitInMilliseconds(3500);
    allMotorsOff();


  }
}