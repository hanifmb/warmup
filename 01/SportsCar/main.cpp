#include "car.h"
#include "sportscar.h"
#include <iostream>

using namespace std;

int main() {
  Car car("Toyota", "Camry", 2019);
  car.drive();

  SportsCar sportscar("Lamborghini", "Aventador", 2024, 281.5);
  sportscar.drive();

  return 0;
}
