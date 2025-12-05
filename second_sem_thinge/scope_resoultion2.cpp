#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  int phone_num;
  string name;

public:
  void enter();
  void printer();
};

void Student::enter() {
  cout << "Enter the name of the student :";
  cin >> name;
  cout << "Enter the phone_num of the student :";
  cin >> phone_num;
}
void Student::printer() {
  cout << "The name of the student is " << name << endl;
  cout << "and his phone number is " << phone_num << endl;
}

int main() {
  Student s;
  s.enter();
  s.printer();
  return 0;
}
