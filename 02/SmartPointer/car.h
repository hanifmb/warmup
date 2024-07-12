#ifndef CAR_H
#define CAR_H

#include "part.h"

class Car {
private:
  Engine *engine_;
  Engine *v8_;
  Engine *v6_;
  Wheel *wheels_;
  Brake *brakes_;
  Transmission *transmission_;

public:
  Car();
  ~Car();
  void printParts();
};

#endif // CAR_H
