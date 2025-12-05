#include <iostream>


using namespace std;

// this is the call by value
void fn(int x) {
  x = x + 1;
  cout << "the value of x in fn is" << x << endl;
}
// this is the call by reference
void function(int &x) {
  x = x + 2;
  cout << "the value of the x in the functin is" << x << endl;
}

int main() {
  int value = 32;
  cout << " the value before calling any function is " << value << endl;
  cout << "calling the call by value " << endl;
  fn(value);
  cout << "the valueof the value after calling the cally by value is " << value
       << endl;
  cout << "calling the call by refrence" << endl;
  cout << "the value before calling the call by refrence is " << value << endl;
  function(value);
  cout << " the value of the value after calling the clall by refrence is "
       << value << endl;

  return 0;
}
