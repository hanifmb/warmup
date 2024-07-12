#include "sportscar.h"
#include <iostream>

float SportsCar::getTopSpeed() const { return _topSpeed; }

void SportsCar::setTopSpeed(float top_speed) { _topSpeed = top_speed; }

SportsCar::SportsCar() {}

SportsCar::SportsCar(std::string make, std::string model, int year,
                     float top_speed) {
  setMake(make);
  setModel(model);
  setYear(year);
  setTopSpeed(top_speed);
}

void SportsCar::drive() const {
  std::cout << "Make: " << getMake() << "\n"
            << "Model: " << getModel() << "\n"
            << "Year: " << getYear() << "\n"
            << "Top Speed: " << getTopSpeed() << "\n";
}
