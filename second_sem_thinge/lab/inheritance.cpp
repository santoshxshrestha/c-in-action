// program to demonstrate single inheritance (eg. employee -> manager)
// multilevel inheritance (person -> Student -> Graduate)
// Author Santosh Shrestha
#include <iostream>
using namespace std;
class Employee {
public:
    void employee() {
        cout << "employee function of class Employee is called" << endl;
    } 
};
class Manager : public Employee {
public:
    void manager(){
        cout<< "manager function of class Manager is called" << endl;
    }
};  

class Person {
public:
    void person() {
        cout << "person function of the class Person is called" << endl;
    }
};
class Student: public Person {
public:
    void student() {
        cout << "student function of class Student is called" << endl;
    }
};
class Graduate: public Student {
public:
    void graduate() {
        cout << "graduate function of class Graduate is called" << endl;    
    }
};
int main() {
    Manager m;
    m.employee();
    m.manager();

    Graduate g;
    g.person();
    g.student();
    return 0;
}