#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "car.h"

class SportsCar : public Car {
private:
  float _topSpeed;

public:
  SportsCar();
  SportsCar(std::string make, std::string model, int year, float top_speed);
  void drive() const;
  float getTopSpeed() const;
  void setTopSpeed(float top_speed);
};

#endif // SPORTSCAR_H
