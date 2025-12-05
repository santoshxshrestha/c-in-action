#include <iostream>
using namespace std;

class Complex {
public:
  int imag, real;
  Complex(int real, int imag) {
    this->real = real;
    this->imag = imag;
  }

  Complex operator+(const Complex &obj) {
    return Complex(real + obj.real, imag + obj.imag);
  }

  Complex operator-(const Complex &obj) {
    return Complex(real - obj.real, imag + obj.imag);
  };
};

int main() {
  Complex obj1(2, 3);
  Complex obj2(3, 5);
  Complex obj4 = obj1 - obj2;
  cout << "the result of the operation is " << obj4.real << " + " << obj4.imag
       << "i" << endl;
  return 0;
}
