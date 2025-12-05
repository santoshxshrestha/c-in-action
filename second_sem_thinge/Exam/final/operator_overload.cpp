#include <iostream>
using namespace std;
class Main {
public:
  int a;

public:
  int operator+(Main &m) { return a - m.a; }
};

int main() {
  Main obj;
  obj.a = 10;
  Main obj2;
  obj2.a = 5;
  cout << obj + obj2 << endl;
  return 0;
}
