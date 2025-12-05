// a class is allowed to inherit from only one class
#include <iostream>
using namespace std;

class Vehicle {
public:
  void vehicle() { cout << "This is a content of vehicle class.\n"; }
};

class Car : public Vehicle {
public:
  void car() { cout << "This is a content of car class\n"; }
};

int main() {
  Car object;
  object.vehicle();
  object.car();
}
