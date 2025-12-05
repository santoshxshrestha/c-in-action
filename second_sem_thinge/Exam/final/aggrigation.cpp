#include <iostream>
#include <string>
using namespace std;

class Base {
public:
  string name;

public:
  Base(string name) { this->name = name; }
};

class Derived {
private:
  Base *name;
  int age;

public:
  Derived(int age, Base *name) {
    this->age = age;
    this->name = name;
  }

  void display() {
    cout << "the name of the person is " << name->name << endl;
    cout << "the age of the person is " << age << endl;
  }
};

int main() {
  cout << "this is the main function here ";
  Base name("Santosh");
  int age = 21;
  Derived person(age, &name);
  person.display();
  return 0;
}
