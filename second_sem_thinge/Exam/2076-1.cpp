#include <iostream>
using namespace std;

class Teacher {
  int tid;
  string subject;

public:
  void readTeacher() {
    cout << "Enter the teacher id \n";
    cin >> tid;
    cout << "Enter the teachers subject\n";
    cin >> subject;
  }

  void displayTeacher() {
    cout << " The id of the teacher is " << tid << endl;
    cout << "the subject of teacher is" << subject << endl;
  }
};

class Staff {
  int sid;
  string position;

public:
  void readStaff() {
    cout << "Enter the staff id of staff" << endl;
    cin >> sid;
    cout << "Enter the position of staff" << endl;
    cin >> position;
  }

  void displayStaff() {
    cout << "The staf id is " << sid << endl;
    cout << "the staf position is " << position << endl;
  }
};

class Coordinator : public Teacher, public Staff {
  string department;

public:
  void readCoordinator() {
    readTeacher();
    readStaff();
    cout << "Enter the department of the coordinator \n ";
    cin >> department;
  }
  void displayCoordinator() {
    displayTeacher();
    displayStaff();
    cout << "the department of Coordinator is " << department << endl;
  }
};

int main() {
  Coordinator Santosh;
  Santosh.readCoordinator();
  Santosh.displayCoordinator();

  Coordinator Anish;
  Anish.readCoordinator();
  Anish.displayCoordinator();
  return 0;
}
