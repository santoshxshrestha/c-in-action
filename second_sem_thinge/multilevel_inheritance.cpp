// a derived class is created from another derived class and that derived class
// can be derived from a base class or any other derived class
#include <iostream>
using namespace std;

class Vehicle {
public:
  void vehicle() { cout << "This is a vehicle\n"; }
};

class TwoWheeler : public Vehicle {
public:
  void two_wheeler() { cout << "This is a two_wheeler\n"; }
};

class MotorCycle : public TwoWheeler {
public:
  void motor_cycle() { cout << "This is a MotorCycle\n"; }
};

int main() {
  MotorCycle obj;
  obj.vehicle();
  obj.two_wheeler();
  obj.motor_cycle();
}
