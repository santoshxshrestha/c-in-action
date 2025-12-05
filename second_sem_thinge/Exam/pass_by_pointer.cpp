// pass by pointer 
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int a = 43;
    int b =23;
    swap(&a, &b);
    cout << "The value after swap is a:"<< a<< "and b :"<< b<< endl;

    return 0;
}
