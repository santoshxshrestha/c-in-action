#include <iostream>
#include <string>
using namespace std;

class Address {

public:
  string streetName;
  Address(string streetName) { this->streetName = streetName; }
};

class Student {
private:
  Address *addr;
  string name;

public:
  Student(string name, Address *addr) {
    this->name = name;
    this->addr = addr;
  }
  void display() {
    cout << "The name of the student is " << name << ".\n";
    cout << "The address of " << name << "is " << addr->streetName << ".\n";
  }
};

int main() {
  Address addr("Golpark");

  Student santosh("Santosh", &addr);
  santosh.display();

  Address addr1("Traffic chowk");
  Student anish("Anish", &addr1);
  anish.display();

  return 0;
}
