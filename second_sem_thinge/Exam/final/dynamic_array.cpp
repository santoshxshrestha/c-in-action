#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cout << "Enter the size of the array: ";
  cin >> n;
  int *array = new int[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cout << "Enter teh value of the element " << i + 1 << ": ";
    cin >> array[i];
    sum = sum + array[i];
  }
  cout << "The sum of the array is " << sum << endl;
  // if the content that we are deleting is an array then we should use delete[]
  // brackets herebracckets
  delete[] array;
  return 0;
}
