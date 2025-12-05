#include <iomanip>
#include <iostream>
using namespace std;

void increment_by_val(int a) {
  a++;
  cout << "The value of the variable in the fn increment_by_val is " << a
       << ".\n";
}

void increment_by_ref(int &a) {
  a++;
  cout << "The value of the variable in the fn increment_by_ref is " << a
       << ".\n";
}

int main() {
  int a = 2;
  cout << "The value of variable `a` before calling the increment_by_val fn is "
       << a << ".\n";
  increment_by_val(a);
  cout << "The value of variable `a` after calling the increment_by_val fn is "
       << a << ".\n";
  cout << setw(199) << "\n";

  int b = 2;
  cout << "The vaiue of the variable `b` before calling the increment_by_ref "
          "fn is "
       << b << ".\n";
  increment_by_ref(b);
  cout << "The value of variable `b` after calling the increment_by_ref fn is "
       << b << ".\n";

  return 0;
}
