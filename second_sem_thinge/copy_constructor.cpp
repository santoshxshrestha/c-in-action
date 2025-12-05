// By default, if you don’t define any constructor, the compiler automatically
// provides a default constructor for you.
// BUT…
// If you define any other constructor(like a copy constructor or
// C++ stops giving you the default
// constructor automatically.
// so we must define it ourself

// Shallow copy
#include <iostream>

using namespace std;

class Vehicle {
public:
  int wheels;
  // here this is default constructor
  Vehicle() {};

  // - **In function parameters:**
  //   `void foo(int &x)` — The `&` means `x` is a **reference** (an alias for
  //   the original variable, not a pointer).
  //
  // - **When using `&` with a variable:**
  //   `int *ptr = &a;` — The `&a` gives the **memory address** of `a`, so `ptr`
  //   is a pointer to `a`.
  //
  // **Key:**
  // - `&` in a parameter type → reference
  // - `&` before a variable name → address-of operator (pointer)
  // They look similar but are used differently!

  Vehicle(Vehicle &obj) {
    wheels = obj.wheels;
    cout << "This is called copy "
            "constructor\n";
  }
};

int main() {
  Vehicle bike;
  bike.wheels = 2;
  cout << "Bike has " << bike.wheels << "wheels\n";

  Vehicle cycle(bike);
  cout << "cycle has" << cycle.wheels << "wheels\n";

  return 0;
}
