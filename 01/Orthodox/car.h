#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
  std::string *_name;
  float *_speed;

public:
  Car();
  Car(const Car &other);
  Car(std::string name, float speed);
  ~Car();
  Car &operator=(const Car &other);
};

#endif // CAR_H
