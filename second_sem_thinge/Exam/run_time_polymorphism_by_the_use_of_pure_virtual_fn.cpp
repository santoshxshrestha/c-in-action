#include <iostream>
using namespace std;

class PureVirtual {
public:
  // here we are delcaring pure virtual function
  virtual void must_do() = 0;
  virtual void breadth() = 0;
};

class Derived : public PureVirtual {
public:
  void must_do() override {
    cout << "I must do this and this is the a pointer to the obj" << endl;
  }

  void breadth() override {
    cout << "taking a long breadth and allmighty push: 🙋" << endl;
  }
};

int main() {
  // testing the run time polymorphism by the use of pure virtual function
  PureVirtual *ptr;
  Derived obj;
  ptr = &obj;
  ptr->must_do();
  ptr->breadth();
  return 0;
}
