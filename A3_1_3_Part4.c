


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
Activity 3.1.3 Part 4
Joseph Robertson
Started 2018-04-14
*/

task main() {
  resetMotorEncoder(quad);
    
  /*
    Turn on both motors forward until the encoder has counted 480 degrees.
    Turn on both motors in reverse until another 3.5 rotations of the encoder have passed.
    Turn off both motors.
  */
    int forwardDegrees;
    forwardDegrees = 480;
    int backwardDegrees;
    backwardDegrees = 360*3.5;
    int motorPower;
    motorPower = 63)
  while(0==0) {
    //Green is forward, red is backward
    turnLedOn(gLED);
		startMotor(motorLeft,motorPower);
		startMotor(motorRight,motorPower);
		untilEncoderCounts(forwardDegrees,quad);
		turnLedOff(gLED);
    turnLedOn(rLED);
    stopAllMotors();
    waitInMilliseconds(10);
    startMotor(motorLeft,motorPower*(0-1));
    startMotor(motorRight,motorPower*(0-1));
    untilEncoderCounts(backwardDegrees,quad);
    stopAllMotors();

	}



}