// program to create class student with data members name,roll and marks. Read
// and display the data using objects
// Author: Santosh Shrestha
#include <iostream>
#include<string>
using namespace std;

class Student {
  string name;
  int rollno;
  int marks;

  public:
    void setData(string name, int rollno, int marks){
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
  Student santosh;
  santosh.setData("Santosh", 49, 100);
  santosh.display();
  return 0;

}
