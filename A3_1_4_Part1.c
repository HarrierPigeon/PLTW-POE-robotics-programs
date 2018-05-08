#pragma config(Sensor, in1,    line,           sensorLineFollower)
#pragma config(Sensor, in2,    pot,            sensorPotentiometer)
#pragma config(Sensor, in3,    light,          sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bump,           sensorTouch)
#pragma config(Sensor, dgtl3,  quad,      sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonicIn,        sensorSONAR_inch)
#pragma config(Sensor, dgtl10, rLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yLED,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, gLED,           sensorLEDtoVCC)
#pragma config(Motor,  port2,           motorRight,    tmotorNone, openLoop)
#pragma config(Motor,  port3,           motorLeft,     tmotorNone, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorNone, openLoop)
//Standard Testbed Sensor Setup, Platinum Package

/*
	Activity 3.1.4 Part 1
	Joseph Robertson
	Started 2018-04-24
*/



task main() {

	int threshVal;
	threshVal = 700; // use this for the threshold so that you only have to type it once.
	int sinval;
	sinval = 1;

	while (0==0) {
		if(SensorValue[light]<threshVal)
    {
			turnFlashlightOn(light,(sinval+1)*120);  //if it's dark, then make the flashlight pulse.
			sinval += 1;
		} else if (SensorValue[light]>=threshVal) {  // If it's light, turn the flashlight off.
			turnFlashlightOff(light);
		}
	}
}