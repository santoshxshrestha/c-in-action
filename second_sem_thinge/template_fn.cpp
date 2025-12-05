#include <iostream>
using namespace std;

template <typename T> T sum(T num1, T num2) { return num1 + num2; }
int main() {
  int a = 30, b = 20;
  int output = sum<int>(a, b);
  std::cout << "The sum of two numbers is " << output << std::endl;

  float c = 10.1, d = 10.1;
  std::cout << "The sum of two numbers is " << sum<float>(c,d) << std::endl;

  return 0;
}
