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


  Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	startMotor(rightMotor, (127/2)); 		//Turns on right motor at 50% power
	startMotor(leftMotor, (127/2)); 		//Turns on left motor at 50% power
	wait(5); 														//Runs above code for 5 seconds
	stopMotor(rightMotor);							//Turns off right motor
	stopMotor(leftMotor);								//Turns off left motor

}
