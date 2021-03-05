/*INCLUSIONS - START*/
  //Standard Library
#include "vex.h"
/*INCLUSIONS - END*/

/*NAMESPACES - START*/
  using namespace vex;
/*NAMESPACES - END*/

/*OBJECT INITIALLIZATIONS - START*/
  //Brain Object
  brain Brain;

  //Contoller Object
  controller Controller1;

  //Motor Object
  motor LeftWheel = motor(PORT1, GREEN_GEAR, false);
  motor RightWheel = motor(PORT1, GREEN_GEAR, false);

  //Competition Object
  competition Competition;
/*OBJECT INITIALLIZATIONS - END*/

/*
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * This should be called at the start of your int main function.
*/
void vexcodeInit(void) 
{
  // Nothing to initialize
}