#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, dgtl1,  baseLiftLower,  sensorTouch)
#pragma config(Sensor, dgtl2,  baseLiftUpper,  sensorTouch)
#pragma config(Sensor, dgtl3,  elbowLiftLower, sensorTouch)
#pragma config(Sensor, dgtl4,  elbowLiftUpper, sensorTouch)
#pragma config(Sensor, dgtl5,  wristLiftLower, sensorTouch)
#pragma config(Sensor, dgtl6,  wristLiftUpper, sensorTouch)
#pragma config(Sensor, dgtl11, red3,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, red4,           sensorLEDtoVCC)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           baseRotation,  tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           baseLift,      tmotorVex393_MC29, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port3,           elbowLift,     tmotorVex393_MC29, openLoop, encoderPort, I2C_2)
#pragma config(Motor,  port4,           handLift,      tmotorVex393_MC29, openLoop, encoderPort, I2C_3)
#pragma config(Motor,  port5,           handRotation,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           handClaw,      tmotorVex393_MC29, openLoop)
#pragma config(DatalogSeries, 0, "I2C Encoder 1 - Base Rotation", Sensors, Sensor, I2C_1, 10)
#pragma config(DatalogSeries, 1, "I2C Encoder 2 - Base Lift", Sensors, Sensor, I2C_2, 10)
#pragma config(DatalogSeries, 2, "I2C Encoder 3 - Elbow Lift", Sensors, Sensor, I2C_3, 10)
#pragma config(DatalogSeries, 3, "I2C Encoder 4 - Hand Lift", Sensors, Sensor, I2C_4, 10)
#pragma config(DatalogSeries, 4, "I2C Encoder 5 - Hand Rotation", Sensors, Sensor, I2C_5, 10)
#pragma config(DatalogSeries, 5, "I2C Encoder 6 - Claw", Sensors, Sensor, I2C_6, 10)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*



                      _____          ___         _____
                     |__  /         <  /        /__  /
                      /_ <          / /           / /  ______
                    ___/ /   _     / /   _       / /  /_____/
                   /____/   (_)   /_/   (_)     /_/

           _____                  _            __   ___
          / ___/__  ___________ _(_)________ _/ /  /   |  _________ ___
          \__ \/ / / / ___/ __ `/ / ___/ __ `/ /  / /| | / ___/ __ `__ \
         ___/ / /_/ / /  / /_/ / / /__/ /_/ / /  / ___ |/ /  / / / / / /
        /____/\__,_/_/   \__, /_/\___/\__,_/_/  /_/  |_/_/  /_/ /_/ /_/
                        /____/

                   /`   | _  |    |_|      . _   |).   _   ,_
                   \,()(|(/_ |)\/ | |(||`|`|(/_|`| |(|(/_()||
                               /                    _|


                                                                                                          
                                            ddddd                            
KKKKKK    KKKKKKKlllll                       d:::d                            
K::::K    K:::::Kl:::l                       d:::d                            
K::::K    K:::::Kl:::l                       d:::d                            
K::::K   K::::::Kl:::l                       d::d                             
KK:::K  K:::::KKK l::l uuuuu  uuuu     ddddddd::d    ggggggg   ggg   eeeeee   
  K::K K:::::K    l::l u:::u  u::u    d:::::::::d   g:::::::ggg::g  e::::::e  
  K:::K:::::K     l::l u:::u  u::u   d::::::::::d  g:::::::::::::g e::eee:::ee
  K::::::::K      l::l u:::u  u::u  d::::ddddd::d g:::::gggg::::gge::e   e:::e
  K::::::::K      l::l u:::u  u::u  d:::d    d::d g::::g    g:::g e:::eee::::e
  K:::K:::::K     l::l u:::u  u::u  d::d     d::d g::::g    g:::g e:::::::::e 
  K::K K:::::K    l::l u:::u  u::u  d::d     d::d g::::g    g:::g e::eeeeeee  
KK:::K  K:::::KKK l::l u::::uu:::u  d::d     d::d g:::::g   g:::g e:::e       
K::::K   K::::::Kl::::lu::::::::::uud:::ddddd:::ddg::::::gggg:::g e::::e      
K::::K    K:::::Kl::::l u::::::::::u d:::::::::::d g::::::::::::g  e::::eeee  
K::::K    K:::::Kl::::l  u:::::::::u  d::::::dd::d  g:::::::::::g   e::::::e  
KKKKKK    KKKKKKKllllll   uuuuuuuuuu   dddddd  ddd   ggggggg::::g    eeeeeee  
                                                            g:::g             
                                                  ggggg     g:::g             
                                                  g::::gg  gg:::g             
                                                    g:::::gg:::::g             
                                                    g:::::::::::              
                                                      ggg:::::gg               
                                                        ggggg                 
 */

// By the way, this is for a Vex Cortex with PLTW Natural Language Enabled and C functions enabled as well.

/* in Visual Studio Code, commenting out a multiline block  is Shift+Alt+A. */
// In the RobotC IDE, the shortcut is Ctrl-Q.


//DECLARING "STATIC" VARIABLES FOR MATH STUFF

// Creating structures for organization, cleanliness, and anti-brain-crash measures.

/*
	+-+-+-+-+-+-+-+-+-+-+-+
	|c|a|l|i|b|r|a|t|i|o|n|
	+-+-+-+-+-+-+-+-+-+-+-+
*/
/*
struct MotorCalibrationControlStructure {
	// 	 these two are the limit switches that mark the end of the arm's rotation in that direction.
	int lowerLimitPort;
	int upperLimitPort;		//This could technically be the same as the first one- would allow for full 360* rotation.
	float stepsPerDegree; 	//When calibrated, this will be how many degrees the encoder has to rotate in order to get to the next degree of movement.  Bypasses the need for a bunch of gear ratio junk.
	float lowerLimitDeg;	//Physical degrees from relative origin to where the lowerLimitSwitch is.
	float upperLimitDeg;	// ` ` to where the upperLimitSwitch is.
	float totalDeg;
	int lowerEncodeDeg;  	//Encoder counts from relative origin to bottom limit.
	int upperEncodeDeg;		//Encoder counts from relative origin to upper limit.
	int isCalibrated;
};

  // Calibration Function

float Calibrate(struct MotorControlStructure current) {  //returns steps per degree.
	current.calibration.isCalibrated = 0;
	while (current.calibration.isCalibrated == 0) {
		if (sensorValue[current.calibration.lowerLimitPort] == 0) {
			startMotor(current.motorPort, (current.maxPower/2)*current.reverse*-1);
		} else {
			current.calibration.lowerEncodeDeg = sensorValue[current.encoderPort];
			stopMotor(current.motorPort);
			startMotor(current.motorPort,(current.maxPower/2)*current.reverse);
			waitInMilliseconds(500);
      if(SensorValue[] current.calibration.upperLimitPort] == 0) {
      }


	}




	current.calibration.isCalibrated = 1;
	}


}

*/



/*
	+-+-+-+-+-+ +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+
	|M|o|t|o|r| |C|o|n|t|r|o|l| |S|t|r|u|c|t|u|r|e|
	+-+-+-+-+-+ +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+
 */
/*
struct MotorControlStructure 		// (StructureName)
{
	int motorPort;								// (StructureName).motorPort
	int encoderPort;							// (StructureName).encoderPort
	int gearRatio;								// (StructureName).gearRatio
	int encoderCalibrationValue;	// (StructureName).encoderCalibrationValue
	int maxPower;
	struct MotorCalibrationControlStructure calibration;
	int reverse;  // Either -1 or 1, depending on if the motor needs to go the other direction.
};
*/


/*
//This might have been outdated by my most current concept of the necessary code.  Wheeee.
struct ArmLengthMathSubStructure // (struct RobotArmControlStructure name).(struct ArmLengthMathSubStructure).XXX
{
   float length;
   float height;
   float MA;
   float angleA;
   float lengthA;
   float angleB;
   float lengthB;
   float angleC;
   float lengthC;

};

*/

/*

struct RobotArmControlStructure
{
  struct MotorControlStructure shoulder;
  struct MotorControlStructure elbow;
  struct MotorControlStructure wrist;
  struct ArmLengthMathSubStructure lengthMath;

};

*/



struct MotorControlStructure    // (StructureName)
{
  int motorPort;                // (StructureName).motorPort
  int upperLimitPort;              // (StructureName).encoderPort
  int lowerLimitPort;
  //int gearRatio;                // (StructureName).gearRatio
  //int encoderCalibrationValue;  // (StructureName).encoderCalibrationValue
  int maxPower;
  //struct MotorCalibrationControlStructure calibration;
  int reverse;  // Either -1 or 1, depending on if the motor needs to go the other direction.
  int joystickControlPort;      //Vex Joystick port, or buttons.
  int isJoystick;               //To keep things from breaking.
  int notJoystickUpButton;
  int notJoystickDownButton;
};

//Basic crappy move function


//basic crappy structure setter upper.
/*FUNCTION*/ void setMotorStructsUp(struct MotorControlStructure baseLOLOLOLOLO, struct MotorControlStructure elbow, struct MotorControlStructure wrist, struct MotorControlStructure Claw, struct MotorControlStructure BaseRotationLOL) {
  //Base
  baseLOLOLOLOLO.motorPort = baseLift;
  baseLOLOLOLOLO.upperLimitPort = baseLiftUpper;
  baseLOLOLOLOLO.lowerLimitPort = baseLiftLower;
  baseLOLOLOLOLO.maxPower = 62;
  baseLOLOLOLOLO.joystickControlPort = Ch3;
  baseLOLOLOLOLO.isJoystick = 1;
  baseLOLOLOLOLO.reverse = 1;

  //Elbow
  elbow.motorPort = elbowLift;
  elbow.upperLimitPort = elbowLiftUpper;
  elbow.lowerLimitPort = elbowLiftLower;
  elbow.maxPower = 62;
  elbow.joystickControlPort = Ch2;
  elbow.isJoystick = 1;
  elbow.reverse = 1;

  //Wrist
  wrist.motorPort = handLift;
  wrist.upperLimitPort = wristLiftUpper;
  wrist.lowerLimitPort = wristLiftLower;
  wrist.maxPower = 62;
  wrist.joystickControlPort = Ch1;
  wrist.isJoystick = 1;
  wrist.reverse = 1;

  //BaseRotation
  BaseRotationLOL.motorPort = baseRotation;
  //BaseRotation.upperLimitPort = BaseRotationUpper;
  //BaseRotation.lowerLimitPort = BaseRotationLower;  // SHOULDN'T NEED LIMITS.
  BaseRotationLOL.maxpower = 62;
  //BaseRotation.joystickControlPort = Ch1;
  BaseRotationLOL.isJoystick = 1;
  BaseRotationLOL.joystickControlPort = Ch4;
  //BaseRotation.notJoystickUpButton = Btn
  baseRotationLOL.reverse = 1;

  //Claw
  Claw.motorPort = handClaw;
  Claw.maxPower = 55;
  Claw.isJoystick = 0;
  Claw.notJoystickUpButton =  Btn5U;
  Claw.notJoystickDownButton = Btn5D;
  Claw.reverse = 1;

}

/*function*/ int EasyWayOutOfPower(struct MotorControlStructure current) {
  int returnval;
  int powerdivider;
  powerdivider = 2;
  if(VexRT[current.notJoystickUpButton] == 1) {
    returnval = current.maxPower / powerdivider * current.reverse;
  } else if (VexRT[current.notJoystickDownButton] == 1) {
    returnval = current.maxPower / powerdivider * current.reverse * -1;
  } else {
    returnval = 0;
  }
  return returnval;
}

/*function*/ int moveJoints(struct MotorControlStructure current) {
  if (SensorValue[current.upperLimitPort] == 0 && SensorValue[current.lowerLimitPort] == 0 ) {
    if (current.isJoystick == 1) {
        startMotor(current.motorPort,VexRT[current.joystickControlPort]/128*current.maxPower);
    } else if (current.isJoystick == 0) {
        startMotor(current.motorPort,EasyWayOutOfPower(current));
    }
  } else {
    stopMotor(current.motorPort);
  }
	return VexRT[current.joystickControlPort]/128*current.maxPower;
}

task main()
{
  struct MotorControlStructure baseRotationStruct;
  struct MotorControlStructure baseLiftStruct;
  struct MotorControlStructure elbowLiftStruct;
  struct MotorControlStructure handLiftStruct;
  struct MotorControlStructure clawStruct;

  setMotorStructsUp(baseLiftStruct,elbowLiftStruct,handLiftStruct,clawStruct,baseRotationStruct);
  while (0!=1) {
    moveJoints(baseRotationStruct);
    moveJoints(baseLiftStruct);
    moveJoints(elbowLiftStruct);
    moveJoints(handLiftStruct);
    moveJoints(clawStruct);
  }
}
