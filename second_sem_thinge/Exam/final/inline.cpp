#include <iostream>
int add() {
  int a = 2, b = 3;
  return a + b;
}

int main() {
  int a = 4, b = 5;
  std::cout << "the sum of " << a << " and " << b << " is " << add()
            << std::endl;
  return 0;
}
