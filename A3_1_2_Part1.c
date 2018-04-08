#pragma config(Sensor, dgtl10, rLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, gLED,           sensorLEDtoVCC)
#pragma config(Motor,  port2,           motorRight,    tmotorNone, openLoop)
#pragma config(Motor,  port3,           motorLeft,     tmotorNone, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorNone, openLoop)

 // RobotC simple template
task main()
{
  while(1)
    {
    // Place control code here
    turnLEDOff(gLED);
    wait(1);
    turnLEDOn(gLED);
    waitInMilliseconds(500);
    turnLedOn(yLED);
    waitInMilliseconds(500);
    turnLedOff(gLED);
    waitInMilliseconds(500);
    turnLedOn(rLED);
    waitInMilliseconds(500);
    turnLEDOff(yLED);
    waitInMilliseconds(500);
    turnLedOn(gLED);
    waitInMilliseconds(500);
    turnLEDOff(gLED);

    }
}
