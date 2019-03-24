#pragma  platform(NXT)
#include "writeFile.c"



int i = 1;

task main()
{
 SetSensorType(S1, sensorLightActive);
 while(1){

  while(SensorValue(S1) <= 40){ //NEGRO
    motor[motorB] = 60;
    motor[motorA] = 10; //menos // IZQ
    wait1Msec(250);

  }
  while(SensorValue(S1) >= 50){ //BLANCO
    motor[motorB] = 10; //menos velocidad
    motor[motorA] = 50;

  }
  }}
