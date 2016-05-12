#pragma config(Sensor, in1,		 lineFollower,	 sensorLineFollower)
#pragma config(Sensor, in2,		 potentiometer,	 sensorPotentiometer)
#pragma config(Sensor, in3,		 lightSensor,		 sensorReflection)
#pragma config(Sensor, dgtl1,	 limitSwitch,		 sensorTouch)
#pragma config(Sensor, dgtl2,	 bumpSwitch,		 sensorTouch)
#pragma config(Sensor, dgtl3,	 quad,					 sensorQuadEncoder)
#pragma config(Sensor, dgtl5,	 sonar,					 sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,					 sensorLEDtoVCC)
#pragma config(Motor,	 port1,						flashlight,		 tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,	 port2,						rightMotor,		 tmotorVex269_MC29, openLoop)
#pragma config(Motor,	 port3,						leftMotor,		 tmotorVex269_MC29, openLoop)
#pragma config(Motor,	 port9,						servoMotor,		 tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard							 !!*//

/*
Project Title: PLTW POE Programming
Team Members: Brandon Takahashi, Ryan Frey, Jaiden Cochenour
Date: 5/2/16
Section: 3.1.1


Task Description:
Copy and Paste a sample program to observe functions of the code

Pseudocode:
Program should start the right motor once the bump switch has been triggered

*/

task main()
{																			//Program begins, insert code within curly braces
	untilBump(bumpSwitch);							//Waits for the bump switch to be pressed
	startMotor(rightMotor, 63);					//Starts right motor at 63 power
	wait(5);														//Runs the motor for 5 seconds
	stopMotor(rightMotor);							//Stops the motor
}