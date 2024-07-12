#include <iostream>
#include <memory>

using namespace std;

class A {
public:
  int number = 21;
  A() { std::cout << "Constructor is called\n"; }
  ~A() { std::cout << "Destructor is called\n"; }
};

int main() {

  A *ptr = new A();
  // std::unique_ptr<A> ptr = std::make_unique<A>();
  delete ptr;
  std::cout << ptr->number << "\n";

  return 0;
}
