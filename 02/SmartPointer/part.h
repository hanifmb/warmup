#ifndef PART_H
#define PART_H

#include <iostream>

class Part {
public:
  Part();
  virtual ~Part() {}
  virtual void print() = 0;
};

class Engine : public Part {
public:
  void print() override { std::cout << "Engine part\n"; }
  virtual ~Engine() {}
};

class V8 final : public Engine {
public:
  void print() override { std::cout << "V8 Engine\n"; }
  ~V8() override {}
};

class V6 final : public Engine {
public:
  void print() override { std::cout << "V6 Engine\n"; }
  ~V6() override {}
};

class Wheel final : public Part {
public:
  void print() override { std::cout << "Wheel part\n"; }
  ~Wheel() override {}
};

class Brake final : public Part {
public:
  void print() override { std::cout << "Brake part\n"; }
  ~Brake() override {}
};

class Transmission final : public Part {
public:
  void print() override { std::cout << "Transmission part\n"; }
  ~Transmission() override {}
};

#endif // PART_H
