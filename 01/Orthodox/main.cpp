#include "car.h"
#include <iostream>

int main() {
  Car car1("C200", 250);
  Car car2(car1);
  std::cout << "--\n";
  Car car3("BMW", 100);
  Car car4 = car3;
  return 0;
}
