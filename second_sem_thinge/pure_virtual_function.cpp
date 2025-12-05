// the method that is defined in the pure virutal function should be implemented
// in each and every child classes
#include <iostream>
using namespace std;

class Animal {
public:
  virtual void eat() = 0;
};

class Goat : public Animal {
public:
  void eat() { cout << "Goat eats grass" << endl; }
  void goat() { std::cout << "This is a goat " << endl; }
};

class Tiger : public Animal {
public:
  void eat() { cout << "Tiger eats meat" << endl; }
  void tiger() { std::cout << "This is a tiger " << endl; }
};

int main() {
  Animal *animal;
  Goat goat;
  goat.goat();
  animal = &goat;
  animal->eat();
  cout << endl;
  Tiger tiger;
  tiger.tiger();
  animal = &tiger;
  animal->eat();

  return 0;
}
