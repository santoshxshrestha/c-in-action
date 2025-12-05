#include <iostream>
using namespace std;

class Complex {
public:
  int real, imag;

  // this will also work fine
  //  Complex(int r, int i) : real(r), imag(i) {}
  Complex(int r, int i) {
    this->real = r;
    this->imag = i;
  }

  Complex operator+(const Complex &obj) {
    return Complex(real + obj.real, imag + obj.imag);
  }

  Complex operator-(const Complex &obj) {
    return Complex(real - obj.real, imag - obj.imag);
  }
};

int main() {
  Complex c1(10, 5), c2(2, 4);

  Complex c3 = c1 + c2;
  // Complex c3 = c1.operator+(c2);
  // this is the compile time transformation so this works
  cout << c3.real << " + i" << c3.imag << endl;

  Complex c4(12, 45), c5(2, 42);

  Complex c6 = c4 - c5;
  cout << c6.real << " + i" << c6.imag << endl;
  return 0;
}
