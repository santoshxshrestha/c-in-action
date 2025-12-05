#include <iostream>
using namespace std;
int number_by_val(int i) {
  int val = ++i;
  cout << "The val in the number by val fn " << val << endl;
  return val;
};
int &number_by_ref(int i) {
  static int val = ++i;
  cout << "The val in the number by ref fn " << val << endl;
  return val;
}

int main() {
  int a = 5;
  cout << "after calling the number by val \n" << number_by_val(a) << endl;
  int b = 5;
  cout << "after calling the number by ref \n" << number_by_ref(b) << endl;
  return 0;
}
