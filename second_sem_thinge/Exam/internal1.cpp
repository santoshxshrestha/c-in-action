#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
  int emp_id;
  string name;
  int salary;
  static int total_employees;

public:
  Employee() { total_employees++; }

  void setData(int emp_id, string name, int salary) {
    this->emp_id = emp_id;
    this->name = name;
    this->salary = salary;
  }

  void display() {
    cout << "Employee ID: " << emp_id << endl;
    cout << "Employee name: " << name << "salary: " << salary << endl;
  }

  static void totalEmployees() {
    cout << "Total Employee : " << total_employees << endl;
  }
};

// we should define it out side of the class
int Employee::total_employees = 0;

int main() {
  Employee employee[5];
  employee[0].setData(1, "Santosh", 2600000);
  employee[0].display();

  employee[1].setData(2, "Anish", 260000);
  employee[1].display();

  employee[2].setData(3, "Sanish", 250000);
  employee[2].display();

  employee[3].setData(4, "Manish", 150000);
  employee[3].display();

  employee[4].setData(5, "Harish", 126000);
  employee[4].display();

  Employee::totalEmployees();

  return 0;
}
