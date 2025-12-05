// a class can inherit from more than one class
#include <iostream>
using namespace std;

class Vehicle {
public:
  void vehicle() { cout << "This is a vehicle\n"; }
};

class TwoWheeler {
public:
  void two_wheeler() { cout << "This is a two wheeler\n"; }
};

class MotorCycle : public Vehicle, public TwoWheeler {
public:
  void motor_cycle() { cout << "This is a motor_cycle\n"; }
};

int main() {
  MotorCycle object;
  object.vehicle();
  object.two_wheeler();
  object.motor_cycle();

  return 0;
}
