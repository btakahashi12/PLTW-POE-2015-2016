#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: PLTW POE Programming
Team Members: Brandon Takahashi, Ryan Frey, Jaiden Cochenour
Date: 5/2/16
Section: 3.1.1


Task Description:
To learn how to use the encoder

Pseudocode:
Power the motors until the encoder is rotated 480 degrees. After 480 degrees
the motors will spin in reverse, moving until the encoder is rotated 3 and a half times.
*/

task main()
{                                     //Program begins, insert code within curly braces
	startMotor(leftMotor, 63);					//starts the left motor
	startMotor(rightMotor, 63);					//starts the right motor
	untilEncoderCounts(480,quad);				//waits for the motor encoder to be rotated 480 degrees
	startMotor(leftMotor , -63);				//starts the left motor in reverse
	startMotor(rightMotor , -63);				//starts the right motor in reverse
	untilEncoderCounts(1260 , quad);		//Waits for the encoder to be rotated 1260 degrees, and then it will move on
	stopMotor(leftMotor);								//Stops the left motor
	stopMotor(rightMotor);							//Stops the right motor
}
