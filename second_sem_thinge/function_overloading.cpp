// In C++, function overloading allows defining multiple functions with the same
// name but different parameter lists within the same scope. This enables the
// compiler to choose the correct function based on the arguments passed during
// a function call, effectively enabling compile-time polymorphism. Overloaded
// functions can be distinguished by the number, type, and order of their
// parameters.
#include <iomanip>
#include <iostream>
using namespace std;

void sum(int a) {
  cout << "you have only provided one parameter, so can't calculate the sum of "
       << a << " ;( \n";
}

void sum(int a, int b) {
  cout << "The sum of two numbers is " << a << " + " << b << " = " << a + b
       << setw(6) << ":)\n";
}

void sum(int a, int b, int c) {
  cout << "The sum of three numbers is " << a << " + " << b << " + " << c
       << " = " << a + b + c << "   :)\n";
}

int main() {
  int num1 = 4;
  int num2 = 4;
  int num3 = 4;
  sum(num1);
  sum(num1, num2);
  sum(num1, num2, num3);
}
