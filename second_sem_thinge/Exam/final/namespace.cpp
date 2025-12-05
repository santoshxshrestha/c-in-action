#include <iostream>
using namespace std;
namespace first {
void func() { cout << "this is the first namespace function " << endl; }
void hello() { cout << "hello there " << endl; }
void how() { cout << "how are you " << endl; }
} // namespace first
using namespace first;
int main() {
  func();

  return 0;
}
