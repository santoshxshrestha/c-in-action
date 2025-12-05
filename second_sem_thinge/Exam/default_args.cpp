#include <iostream>
using namespace std;
void func(int a= 43){
    cout<< "the val is: " << a<< endl;
}

int main(){
    int a = 2;
    func (a);
    return 0;
}
