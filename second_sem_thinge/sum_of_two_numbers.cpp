#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    
    cout<< "Enter the first number: ";
    cin>>a;

    cout<< "Enter the second number: ";
    cin>>b;

    int sum = a+b;

    cout<<a <<" + "<<b<< " = "<<sum<<"\n";

    float c,d;

    cout<< "Enter the first float number: ";
    cin>>c;

    cout<< "Enter the second float number: ";
    cin>>d;

    float sum_of_float = c+d;

    cout<<c <<" + "<<d<< " = "<<sum_of_float <<"\n";

    //these are the different ways of initialization 
    double d1{1.413};

    double d2={1.413};
    double d3 = 42.423;


    //vector data type like that of the rust 
    vector<int> v1 = {42,42,542,32,312,42,542};

    auto s1 = "santosh";
    auto s2 = 32.42;
}
