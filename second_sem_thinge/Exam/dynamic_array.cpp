#include <iostream>
using namespace std;

int main() {
  int *array = new int[5]; // dynamically allocate an array of 5 integers
  for (int i = 0; i < 5; i++) {
    cout << "Enter the number for " << i + 1 << " element : ";
    cin >> array[i];
  };

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum = sum + array[i];
  }
  cout << "The sum of the array elements is: " << sum << endl;
  return 0;
}
