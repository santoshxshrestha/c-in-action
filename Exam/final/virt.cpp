#include <iostream>
using namespace std;

class Base {
public:
  virtual void message() { cout << "this is virtual message" << endl; }
};

class Child : public Base {
public:
  void message() override {
    cout << "this is the message from the child class and the bace class "
            "message is overridden here "
         << endl;
  };
};

int main() {
  Base *ptr, obj;
  Child child;
  ptr = &child;
  ptr->message();
  obj.message();
  return 0;
}
