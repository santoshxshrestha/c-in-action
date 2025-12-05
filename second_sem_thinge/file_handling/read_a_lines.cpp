#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("example.txt");
    string line;
    getline(file, line); // Read the first line

    cout<< line<< endl;

    return 0;

}
