#include <iostream>
using namespace std;
int main() {
    float p,t,r;
    cout<< "Enter the principle: ";
    cin>> p;

    if (p<=0) {
        cout<< "You have zero Interest";
        return 1;
    }

    cout<< "Enter the time: ";
    cin>> t;

    cout<< "Enter the rate: ";
    cin>> r;

    float Interest = (p*t*r)/100;
    if (Interest<=0) {
        cout<< "You don't have any interest\n";
        return 1;
    }else {
        cout<< "The total interest amount is "<<Interest<<"$ \n";
    }
    
    return 0;
}
