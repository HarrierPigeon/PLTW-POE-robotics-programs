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
	Activity 3.1.4 Part 2
	Joseph Robertson
	Started 2018-04-24
*/



task main() {

	int darkThreshold;

	while (0==0)//repeat indefinitely
{
		/*
				Task: Program the VEX Cortex so that when the limit switch is pressed, the flashlight responds to light.
				When the limit switch is pressed, the flashlight should turn on when it is dark in the room (or when the sensor is blocked)
				and off when it is bright in the room. When the limit switch is not pressed, the flashlight should always be off.
				The program should loop indefinitely, waiting until the limit switch is pressed again.
				If your group doesn’t have the flashlight, use a motor instead.
		*/

    if (SensorValue[limitSwitch] =1)//repeat while limitSwitch pressed
    {
        if (SensorValue[] )//respond to lightSensor
        {

        }
        else
        {

        }
    } else { 
    	turnFlashlightOff(light);
    }

    //do this when the limitSwitch is not pressed
}