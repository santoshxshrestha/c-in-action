#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "How many number do you want to calculate the sum of :";
  cin >> n;
  int *arr = new int[n];

  int sum = 0;
  for (int i = 0; i < n; i++) {
    cout << "Enter the number" << i + 1 << " :";
    cin >> arr[i];
    sum += arr[i];
  }

  cout << "The sum of the numbers that you have entered is " << sum << endl;

  delete[] arr;
}
