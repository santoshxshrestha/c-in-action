// more than one subclass is inherited from a single base class
#include <iostream>
using namespace std;

class Vehicle {
public:
  void vehicle() { cout << "This is a vehicle\n"; }
};

class Car : public Vehicle {
public:
  void car() { cout << "This is a car\n"; }
};

class MotorCycle : public Vehicle {
public:
  void motor_cycle() { cout << "This is a motory cycle"; }
};

int main() {
  Car car;
  MotorCycle motorcycle;

  car.vehicle();
  car.car();

  motorcycle.vehicle();
  motorcycle.motor_cycle();

  return 0;
}
