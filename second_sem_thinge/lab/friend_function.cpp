// program to use friend function to access private data of two different classes and
// parform addition
#include <iostream>
using namespace std;

//forward declaration to inform the compiler about the existence of a class before it is fully defined.
class Number2; 

class Number1
{
private:
    int num1 = 2;

public:
    friend int add(Number1 &obj1, Number2 &obj2);
};

class Number2
{
private:
    int num2 = 3;

public:
    friend int add(Number1 &obj1, Number2 &obj2);
};

int add(Number1 &n1, Number2 &n2)
{
    return n1.num1 += n2.num2;
}

int main()
{
    Number1 obj1;
    Number2 obj2;
    cout << "Sum of private data members: " << add(obj1, obj2)<< endl;

    return 0;
}
