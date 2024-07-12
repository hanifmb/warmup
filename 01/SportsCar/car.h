#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
  std::string _make;
  std::string _model;
  int _year;

public:
  Car();
  Car(std::string getMake, std::string getModel, int getYear);
  void drive() const;
  std::string getMake() const;
  std::string getModel() const;
  int getYear() const;
  void setMake(const std::string &make);
  void setModel(const std::string &model);
  void setYear(int year);
};

#endif // CAR_H
