#include <iostream>
#include <string>
using namespace std;
class Main {
private:
  string name;
  friend class Another;

public:
  string surname;

protected:
  string address;

public:
  friend class Another;
  Main(string name, string surname, string address) {
    this->name = name;
    this->surname = surname;
    this->address = address;
  }
};

class Another {
private:
  string name;
  string surname;
  string address;

public:
  Another(Main &obj) {
    this->name = obj.name;
    this->surname = obj.surname;
    this->address = obj.address;
  }

  void display() {
    cout << "the name of the person is " << name << endl;
    cout << "the surname of the person is " << surname << endl;
    cout << "the address of the perosn is " << address << endl;
  }
};

int main() {
  string name = "santosh";
  string surname = "shrestha";
  string address = "kathmandu";
  Main main(name, surname, address);
  Another another(main);
  another.display();
  return 0;
}
