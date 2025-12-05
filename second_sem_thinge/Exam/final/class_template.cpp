#include <iostream>
using namespace std;

template <typename T> class Main {
public:
  T a;
  T b;
  Main(T a, T b) {
    this->a = a;
    this->b = b;
  }

  T add() { return a + b; }
  T multiply() { return a * b; }
};

int main() {
  int a = 3;
  int b = 3;
  Main<int> obj(a, b);
  cout << " the sum fo the two number is:" << obj.add() << endl;
  cout << "the multiplication of the two number is : " << obj.multiply()
       << endl;

  return 0;
}
