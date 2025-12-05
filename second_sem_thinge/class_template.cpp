#include <iostream>

template <typename T> class Calculation {
public:
  T num1, num2;
  Calculation(T num1, T num2) {
    this->num1 = num1;
    this->num2 = num2;
  }

  T sum() { return num1 + num2; }
};

int main() {
  int a = 10, b = 10;
  Calculation<int> obj(a, b);
  std::cout << "The result is " << obj.sum() << std::endl;
  return 0;
}
