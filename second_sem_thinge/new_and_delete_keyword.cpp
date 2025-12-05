#include <iostream>
using namespace std;

int main() {
  {
    // Dynamically allocate memory for one integer
    int *ptr = new int;

    // Assign value
    *ptr = 42;

    // Use the value
    cout << "Value: " << *ptr << endl;

    // Free the memory
    delete ptr;
  }

  {
    // Allocate array of 5 integers
    int *arr = new int[5];

    // Assign and print values
    for (int i = 0; i < 5; ++i) {
      arr[i] = i * 10;
      cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Free the array memory
    delete[] arr;
  }

  return 0;
}
