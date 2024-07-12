#include "car.h"

Car::Car() {
  engine_ = new Engine();
  v8_ = new V8();
  v6_ = new V6();
  wheels_ = new Wheel[4];
  brakes_ = new Brake[4];
  transmission_ = new Transmission();
}

void Car::printParts() {
  engine_->print();
  v8_->print();
  v6_->print();
  for (int i = 0; i < 4; ++i) {
    wheels_[i].print();
    brakes_[i].print();
  }
  transmission_->print();
}

Car::~Car() {
  delete engine_;
  delete v8_;
  delete v6_;
  delete[] wheels_;
  delete[] brakes_;
  delete transmission_;
}
