#include <iostream>
using namespace std;

class Base {
public:
  virtual void message() {
    cout << "this is the message from the base class " << endl;
  }
  virtual void pure_virtual() = 0;
  void another() {
    cout << "this is  the another function out there in teh base class" << endl;
  }
};

class Child : public Base {
public:
  void message() {
    cout << "this is the message from the child class and the bace class "
            "message is overridden here "
         << endl;
  }
  void pure_virtual() {
    cout << "this is the implementation of the pure virtual function in the "
            "child class"
         << endl;
  }
};

int main() {
  // here base class is a abstract class because it has a pure virtual function
  // we cann't create the object of the base class but we can create the pointer
  // of it and point it to the child class object
  Base *obj;
  Child child;
  child.pure_virtual();
  // child.message();// we can also call the child class method directly but
  // there will be no use of polymorphism
  obj = &child;
  // now this is called the run time polymorphism
  obj->message();

  return 0;
}
