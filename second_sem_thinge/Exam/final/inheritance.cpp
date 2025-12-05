#include <iostream>
using namespace std;

class Base {
protected:
  void base() { cout << "this is teh base method" << endl; }
};

class Derived : protected Base {
public:
  void derived() {
    cout << "this is the derived method" << endl;
    base();
  }
};

class GrandDerived : public Derived {
public:
  void grandDerived() {
    cout << "this is the grand derived method" << endl;
    base();
  };
};

int main() {
  GrandDerived obj;
  // obj.base();
  return 0;
}
