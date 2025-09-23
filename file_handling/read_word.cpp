#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream file("example.txt");
  string word;

  file >> word;
  cout << word << endl;

  file.close();
  cout << "word read successfully." << endl;

  return 0;
}
