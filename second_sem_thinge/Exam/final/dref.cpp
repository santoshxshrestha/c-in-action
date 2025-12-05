#include <iostream>
using namespace std;

int main() {
  int a = 2;
  int *ptr;
  ptr = &a;
  cout << "the content is :" << *ptr << endl;
  delete ptr;
  return 0;
}
