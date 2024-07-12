#include "car.h"
#include <iostream>

std::string Car::getMake() const { return _make; }

std::string Car::getModel() const { return _model; }

int Car::getYear() const { return _year; }

void Car::setMake(const std::string &make) { _make = make; }

void Car::setModel(const std::string &model) { _model = model; }

void Car::setYear(int year) { _year = year; }

Car::Car() {}

Car::Car(std::string make, std::string model, int year)
    : _make(make), _model(model), _year(year) {}

void Car::drive() const {
  std::cout << "Make: " << _make << "\n"
            << "Model: " << _model << "\n"
            << "Year: " << _year << "\n";
}
