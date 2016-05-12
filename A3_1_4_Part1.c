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
learning how to use if else statements and while loops

Pseudocode:
runs the code for an infinite amount of times
it will check if the light sensor value is greater then 500, where it will then turn on the flashlight
if the conditions are not met, the flashlight will turn off
*/

task main(){                                     			//Program begins, insert code within curly braces
	while(1 == 1)																				//infinite loop{
		if (SensorValue(lightSensor)>500)									//looks if the light sensor value is greater than 500{
		turnFlashlightOn(flashlight, 127);								//turns flashlight on
else																									//if conditions not met, it will revert to statement in else{
	turnFlashlightOff(flashlight);											//turns off flashlight
}