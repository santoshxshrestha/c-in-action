#include <iostream>
using namespace std;
class Number {
  int number;

public:
  Number(int number) { this->number = number; }

  Number operator*(Number &obj) { return Number(number * obj.number); }

  void display() {
    cout << "the product of numbers is " << this->number << endl;
  }
};

int main() {
  // here what is happening is this->number = 4 + number = 2
  Number n(4), w(2);
  Number product = n * w;
  product.display();
  return 0;
}
