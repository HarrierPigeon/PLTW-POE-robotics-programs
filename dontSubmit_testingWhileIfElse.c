/*
  Project Title: 3.1.3
  Team Members: Joseph
  Date: 2018-04-14
  Section: 3.1.3
  Pseudocode: 

*/
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


task main()
{
	int mMotor;
	mMotor = motorRight;
	int motorCount;
	motorCount = 0;
	int onTime;
	onTime = 2000;
	int offTime;
	offTime = 2000;
	while (motorCount <= 3) {
		if (motorCount < 3) {
			startMotor(mMotor);
			waitInMilliseconds(onTime);
			stopMotor(mMotor);
			waitInMilliseconds(offTime);
			motorCount += 1;

		}
		else if (motorCount == 3) { motorCount = 0}
	}
  }



}