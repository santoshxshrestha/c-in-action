#include <iostream>
using namespace std;

// here in question we are asked to count the number of times a function is
// called by the use of the static variable (data member so we have to use the
// // class)

class Counting {
public:
  static int count; // static variable to keep track of function calls
  void func() {
    cout << "the func is called" << endl;
    count++;
  }
  static void displayCount() {
    cout << "count of the func call is " << count << endl;
  }
};

int Counting::count = 0;

int main() {
  Counting a;
  a.func();

  Counting b;
  b.func();

  Counting c;
  c.func();

  cout << "the total number calls of the function is " << Counting::count
       << endl;

  return 0;
}
