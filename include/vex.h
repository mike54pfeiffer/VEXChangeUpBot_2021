/*INCLUSIONS - START*/
  //Standard Library
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  //VEX Library
#include "v5.h"
#include "v5_vcs.h"

  //Project Files
#include "robot-config.h"
/*INCLUSIONS - END*/

/*DEFINITIONS*/
  //Gears
#define RED_GEAR vex::gearSetting::ratio36_1 //100RPM
#define GREEN_GEAR vex::gearSetting::ratio18_1 //200RPM
#define BLUE_GEAR vex::gearSetting::ratio6_1 //600RPM

  //Macros
#define waitUntil(condition)\
  do {\
    wait(5, msec);\
  } while (!(condition))

#define repeat(iterations)\
  for (int iterator = 0; iterator < iterations; iterator++)