#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream file("example.txt");
  string line;
  getline(file, line); // Read the first line

  cout << line << endl;

  file.close();
  cout << "File read successfully." << endl;

  return 0;
}
