#include <iostream>
using namespace std;

int main(){
    const int data = 343;
//    const lol = 4343;
    
   /* 2 }              │./const.cpp:6:11: error: ‘lol’ does not name a type                                                                                                                     │
~                    │    6 |     const lol = 4343;                                                                                                                                           │
~                    │      |           ^~~                                                                                                                                                   │*/
    cout << "the data is stored "<< data<< endl;
    return 0;
}
