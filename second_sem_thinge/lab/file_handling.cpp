// program to write student records into a file read and display the contents from the file
// and update a record
// Author : Santosh Shrestha
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream studentFile("students.txt", ios::in | ios::out | ios::app);
    studentFile << 49 << " " << "Santosh" << endl;
    studentFile << 50 << " " << "Anish" << endl;
    studentFile << 51 << " " << "Prakash" << endl;
    studentFile.seekg(0);

    string line;
    while (getline(studentFile, line)){
        cout << line << endl;
    }

    studentFile.close();
    return 0;
}