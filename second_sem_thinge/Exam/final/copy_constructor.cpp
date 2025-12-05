#include <iostream>
using namespace std;

class Base {
private:
  int age;

public:
  Base(int age) { this->age = age; }

  Base(const Base &obj) { this->age = obj.age + 1; }

  void display() { cout << "The age is " << age << endl; }
};
int main() {
  Base obj(23);
  obj.display();

  Base another_obj = obj;
  // here we are calling the copy constructor
  another_obj.display();

  return 0;
}
