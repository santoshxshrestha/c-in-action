#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

int exponent(int a){
    return pow(a,a);

}
int main(){
    int var = 3;
    int result = exponent(var);
    cout<< "the poser of the var is " << result << endl;


    return 0;
}
