#include <iostream>
using namespace std;

void greatest(int a = 0, int b = 0, int c = 0) {
  if (a > b && a > c) {
    std::cout << "A = " << a << " is the greatest of them all";
  } else if (b > a && b > c) {
    std::cout << "B = " << b << " is the greatest of them all";
  } else {
    std::cout << "C = " << c << " is the greatest of them all";
  }
}

int main() {
  int a, b, c;
  cout << "Enter the first number a: ";
  cin >> a;
  cout << "Enter the second number b: ";
  cin >> b;
  cout << "Enter the third number c: ";
  cin >> c;
  greatest(a, b, c);
  // here we are not passing any value so the function is running with the
  // default arguments which are zeros
  greatest();
}
