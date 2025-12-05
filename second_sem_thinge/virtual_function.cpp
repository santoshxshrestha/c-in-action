
// The `override` keyword in C++ explicitly tells the compiler that a member
//             function is intended to override a virtual function in a base
//             class
//                 .
//
//                     **With `override`
//     : **-The compiler checks that the function actually overrides
//           a virtual function in the base class.-
//         If there is a mismatch in the function signature or
//     the base function is not virtual,
//     the compiler will generate an error.-
//         This helps catch mistakes and makes your code safer and clearer
//             .
//
//                 **Without `override`
//     : **-The compiler does not check if you are actually overriding a
//           base class function.-
//         If you accidentally mismatch the function signature(
//             e.g., wrong parameter type),
//     the function will not override the base class function,
//     and no error will be reported.-
//         This can lead to subtle bugs and unexpected behavior.
#include <iostream>
using namespace std;

class EnergySource {
public:
  virtual void energy_source() { cout << "This vehicle takes gas" << endl; }
};

class MotorCycle : public EnergySource {
public:
  void motor_cycle() { cout << "This is a MotorCycle" << endl; }
};

class CableCar : public EnergySource {
public:
  // the overriding function is used to provide a specific implementation
  // the use of hte override keyword is optional but it helps to
  // ensure that the function is indeed overriding a base class method
  void energy_source() override {
    cout << "This vehicle takes electricity" << endl;
  }
  void cable_car() { cout << "This is a cable car" << endl; }
};

int main() {
  EnergySource *basePtr;
  MotorCycle motor_cycle;
  basePtr = &motor_cycle;
  basePtr->energy_source();
  motor_cycle.motor_cycle();

  // - **Runtime polymorphism** in C++ occurs when you use a base class pointer
  // (or reference) to call a virtual function. For example,
  // `basePtr->energy_source();` will call the overridden method in the derived
  // class (`MotorCycle`) if `energy_source()` is declared as `virtual` in the
  // base class. This allows the program to decide at runtime which function
  // implementation to invoke, based on the actual object type pointed to by the
  // base pointer.

  cout << "-------------------------------------------\n";
  CableCar cable_car;
  basePtr = &cable_car;
  basePtr->energy_source();
  cable_car.energy_source();

  return 0;
}
