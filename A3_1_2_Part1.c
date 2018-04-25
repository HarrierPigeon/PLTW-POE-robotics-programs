#pragma config(Sensor, dgtl10, rLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, gLED,           sensorLEDtoVCC)
#pragma config(Motor,  port2,           motorRight,    tmotorNone, openLoop)
#pragma config(Motor,  port3,           motorLeft,     tmotorNone, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorNone, openLoop)


/*
  Project Title: Basic Outputs Programming, Part 1
  Team Members: Joseph
  Date: 2018-04-7
  Section: 3.1.2
  Pseudocode: Meh.

*/



 // RobotC simple template
task main()
{




  while(1==1)
    {
    // Place control code here
    turnLEDOff(rLED);
    //waitInMilliseconds(100);
    //turnLEDOn(gLED);
    waitInMilliseconds(100);
    turnLedOn(yLED);
    waitInMilliseconds(100);
    turnLedOff(gLED);
    waitInMilliseconds(100);
    turnLedOn(rLED);
    waitInMilliseconds(100);
    turnLEDOff(yLED);
    waitInMilliseconds(100);
    turnLEDOn(gLED);
    waitInMilliseconds(100);
    //turnLEDOff(gLED);

    }
}
