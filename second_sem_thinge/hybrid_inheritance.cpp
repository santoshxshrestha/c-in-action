// combining more than one type of inheritance
#include <iostream>
using namespace std;

class Vehicle {
public:
  void vehicle() { cout << "This is a vehicle"; }
};

class Electricity {
public:
  void electricity() { cout << " This is electricity"; }
};

class MotorCycle : public Vehicle {
public:
  void motor_cycle() { cout << "This is a MotorCycle"; }
};

class CableCar : public Electricity, public Vehicle {
public:
  void cable_car() { cout << "This is a cable car"; }
};

int main() {
  CableCar cable_car;
  cable_car.vehicle();
  cable_car.electricity();
  cable_car.cable_car();

  MotorCycle motor_cycle;
  motor_cycle.vehicle();
  motor_cycle.motor_cycle();

  return 0;
}
