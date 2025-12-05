// program to create a function template to perform a genric operation swap in this case
// Author : Santosh Shrestha
#include <iostream>
using namespace std;

template <typename T>
void swap_vars(T &num1, T &num2) {
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap_vars(a,b);

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}

