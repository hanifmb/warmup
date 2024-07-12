#include "car.h"
#include <iostream>

Car::Car() {}

Car::Car(const Car &other) {
  _name = new std::string(*other._name);
  _speed = new float(*other._speed);
  std::cout << "Object is copied through the copy constructor.\n";
  std::cout << "_name addr: " << _name << "| other _name addr: " << other._name
            << "\n";
  std::cout << "_speed addr: " << _speed
            << "| other _speed addr: " << other._speed << "\n";
}

Car::Car(std::string name, float speed) {
  _name = new std::string(name);
  _speed = new float(speed);
}

Car &Car::operator=(const Car &other) {
  if (this == &other)
    return *this; // handle self assignment
  delete _name;
  delete _speed;
  _name = new std::string(*other._name);
  _speed = new float(*other._speed);
  return *this;
  std::cout << "Object is copied through the assignment operator.\n";
  std::cout << "_name addr: " << _name << "| other _name addr: " << other._name
            << "\n";
  std::cout << "_speed addr: " << _speed
            << "| other _speed addr: " << other._speed << "\n";
}

Car::~Car() {
  delete _name;
  delete _speed;
  std::cout << "Destructor is called.\n";
}
