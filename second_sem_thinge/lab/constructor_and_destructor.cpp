// program to demonstrate the use of default constructor parameterized
// constructor , copy constructor and destructor
// Author: Santosh Shrestha
#include <iostream>
using namespace std;
class DefaultConstructor {
public:
  DefaultConstructor() { cout << "Default Constructor Called" << endl; }
};
class ParameterizedConstructor {
  int x;

public:
  ParameterizedConstructor(int x) {
    cout << "Parameterized Constructor Called with value: " << x << endl;
  }
};
class CopyConstructor {
  int x;

public:
  CopyConstructor(int val) {
    x = val;
    cout << "Parameterized Constructor of CopyConstructor Called with value: "
         << x << endl;
  }
  CopyConstructor(const CopyConstructor &obj) {
    x = obj.x;
    cout << "Copy Constructor Called and the value in CopyConstructor object: "
         << x << endl;
  }
};
class Destructor {
public:
  ~Destructor() { cout << "Destructor Called" << endl; }
};
int main() {
  DefaultConstructor obj1;
  ParameterizedConstructor obj2(10);
  CopyConstructor obj3(20);
  CopyConstructor obj4(obj3);
  Destructor obj5;
  return 0;
}
