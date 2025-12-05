// program to overload the following operators usnign a class Complex: + (addition)
// Author: Santosh Shrestha
#include <iostream>
using namespace std;
class Complex
{
public:
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main(){
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2; 

    cout << "Result of addition: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}