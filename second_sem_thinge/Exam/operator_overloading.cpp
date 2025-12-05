// crating class named complex number adding then and subtracting them
#include <iostream>
using namespace std;
class Complex {
private:
  int real;
  int imaginary;

public:
  Complex(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
  }

  Complex operator+(Complex &obj) {
    return Complex(real + obj.real, imaginary + obj.imaginary);
  }

  void display() { cout << real << "+ i" << imaginary << endl; }
};

int main() {
  Complex a(1, 3), b(1, 3);
  // a.operator+(b) is called
  //
  // Inside the function:
  //
  //     this->real = a.real = 1
  //
  //     obj.real = b.real = 1
  //
  //     Sum of real parts = 2
  //
  //     Sum of imaginary parts = 6
  Complex c = a + b;
  c.display();
  return 0;
}
