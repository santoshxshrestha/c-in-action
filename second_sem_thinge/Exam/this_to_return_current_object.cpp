#include <iostream>
using namespace std;

class ThisToReturn {
public:
  // here the method another_func returns 'this' , which is a pointer to the
  // current object
  ThisToReturn *another_func() { return this; }
  void func() { cout << "the func is called" << endl; }
};

int main() {
  ThisToReturn obj;
  ThisToReturn *ptr = obj.another_func();
  ptr->func();
  return 0;
}
