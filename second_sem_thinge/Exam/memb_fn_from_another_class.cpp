#include <iostream>
#include <string>
using namespace std;

class Derived;

class Base {
public:
  void display(Derived &obj);
};

class Derived {
public:
  string content;

  Derived(string content) { this->content = content; }
  friend void Base::display(Derived &obj);
};

void Base::display(Derived &obj) {
  cout << "The content of the derived class is " << obj.content << endl;
}

int main() {
  Derived derived("this is the content ");
  Base base;
  base.display(derived);

  return 0;
}
