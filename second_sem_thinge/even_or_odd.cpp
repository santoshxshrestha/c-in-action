#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Enter the number: ";
  cin >> number;
  if (number == 0) {
    cout << "The entered number is zero so it can't be evern and odd.\n";
  } else {
    cout << "The entered number " << number << " is "
         << (number % 2 == 0 ? "Even" : "Odd") << ".\n";
  }
}
