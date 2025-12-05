// program to hadle divide by zero and array out of bound access errors
// Author : Santosh Shrestha
#include <iostream>
using namespace std;
int main() {
  int a = 10, b = 0;
  int arr[5] = {1, 2, 3, 4, 5};
  int index = 6;

  try {
    if (b == 0) {
      throw std::runtime_error("Division by zero error");
    }
    int result = a / b;
    std::cout << "Result: " << result << std::endl;
  }
  // e is the caught exception.
  catch (const runtime_error &e) {
    // .what() gives the reason/message behind the exception.
    cerr << "Runtime error: " << e.what() << std::endl;
    // return 1;
    // we are commenting the return statement to continue execution
    // of the program even after an exception is thrown.
  }

  try {
    if (index >= sizeof(arr) / sizeof(arr[0])) {
      throw std::out_of_range("Array index out of bounds");
    }
  } catch (const out_of_range &e) {
    cerr << "Out of range error: " << e.what() << std::endl;
  }

  return 0;
}
