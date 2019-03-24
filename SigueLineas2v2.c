#pragma  platform(NXT)
#include "writeFile.c"


int error,errorant = 0;
int i = 1;

task main()
{
 SetSensorType(S1, sensorLightActive);
 i = 1;
 while(1){
 error = 45 - SensorValue(S1); //valor 45 proveniente de una calibracion previa
 motor[motorA] = 65 + 2.1*error + 0.9*errorant;
 motor[motorB] = 40 - 1.4*error - 0.9*errorant;
 errorant=error;

 //inspirado en http://blog.electricbricks.com/2010/03/tutorial-robotc-lego-mindstorms-nxt-2/






  }
  }
