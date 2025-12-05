#include <fstream>
#include <iostream>
using namespace std;

int main() {
  std::ofstream file("example.txt");
  if (file.is_open()) {
    file << "Hello, World!" << std::endl;
    file.close();
    std::cout << "File created and written successfully." << std::endl;
  } else {
    std::cerr << "Error opening file." << std::endl;
  }
  file.close();
  cout << "File closed." << endl;
  return 0;
}
