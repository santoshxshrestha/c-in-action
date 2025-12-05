#include <iostream>
using namespace std;

template <typename T, typename U> T add(T a, U b) { return a + b; }

int main() {
  float b = 5.6;
  int a = 5;
  float result = add<int, float>(a, b);
  cout << "the result is " << result << endl;
  return 0;
}
