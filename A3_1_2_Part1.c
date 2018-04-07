#pragma config(Sensor, in1,   line,   sensorLineFollower)


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

