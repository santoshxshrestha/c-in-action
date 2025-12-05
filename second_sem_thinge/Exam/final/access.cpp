// if public: accessible everywhere
// if private: accessible only within the class
// if protected: accessible within the class and its derived classes

#include <iostream>
#include <string>
using namespace std;
class Main {
private:
  string name;

public:
  string surname;

protected:
  string address;
};

class Derived : public Main {
  void display() {
    // cout << "the name of the person is " << name
    //      << endl; // This will give an error because name is private
    cout << "the surname of the person is " << surname << endl;
    cout << "the address of the person is " << address << endl;
  }
};

int main() {
  Main obj;
  obj.surname = "Shrestha";
  cout << obj.surname << endl;

  // obj.address =
  //     "Kathmandu"; // This will give an error because address is protected
  // obj.name = "Sujan"; // This will give an error because name is private

  Derived derived_obj;
  derived_obj.surname = "Shrestha";
  // derived_obj.address = "Kathmandu"; // This will give an error because
  // address is
  // derived_obj.naem = "Sujan"; // This will give an error because name is
  // private
  return 0;
}
