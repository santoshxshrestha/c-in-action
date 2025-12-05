// program to use a basic class pointer to call overridden functions in derived classes
// Author Santosh Shrestha
#include<iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "show function of the Base class called" << endl;
    }
};
class Derived: public Base {
public:
    void show() {
        cout << "show function of the Derived class called after overwritting" << endl;
    }
};
int main(){
    Base *b; 
    Derived d;
    b = &d;
    b->show(); 
    return 0;
}