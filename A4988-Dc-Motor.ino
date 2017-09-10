#include "A4988_DC.h"

// ================================================================
// ===            A4988_DC CLASS EXAMPLE TEST CODE              ===
// ================================================================

Motor* A4988;

void setup(){
  A4988 = new Motor();
  A4988->setPins(3, 5, 4);
  A4988->setSpeed(80);
  
  A4988->run();
  delay(1000);
  A4988->toggleDirection();
  delay(1000);
  A4988->setSpeed(200);
  delay(1000);
  A4988->stop();
}

void loop(){
  //TODO
}
