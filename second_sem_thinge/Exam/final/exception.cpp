#include <iostream>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int index = 6;
  int lenght = sizeof(arr) / sizeof(arr[0]);
  try {
    if (index >= lenght) {
      throw index;
    }
    cout << "the val is " << arr[index] << endl;
  } catch (int e) {
    cout << "the index " << e << " is out of bound " << endl;
  }

  return 0;
}
