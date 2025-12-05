#include <iostream>
#include <string>
using namespace std;

template <typename T, typename B> void hello(T name, B age) {
  cout << "hello " << name << ". your age is " << age << endl;
}

template <typename T> T sum(T a, T b) { return a + b; }
int main() {
  int a = 43;
  int b = 2;
  cout << "the sum of the two number is " << sum<int>(a, b) << endl;

  string name = "santosh";
  int age = 21;
  hello<string, int>(name, age);
  return 0;
}
