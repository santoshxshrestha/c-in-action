#include <iostream>
int& max(int& a, int &b){
    if (a>b){
        return a;
    }else {
        return b;
    }
}

int main(){
    int a = 43;
    int b = 23;
    // here the value that is returned will be assigned as 0 in this case the max func will return a so in place of a there will be 0 and 
    // another var is going to remain same out there 
    max(a,b) = 0;
    std::cout << "the return val is a: "<< a<<  ",b:"<<b<< std::endl;
    return 0;
}
