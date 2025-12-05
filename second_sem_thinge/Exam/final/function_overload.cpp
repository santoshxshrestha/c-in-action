#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) { return a + b; }
string add(string a, string b) { return a + b; }

int main() {
  string hello = "hello";
  string world = "world";
  cout << add(hello, world) << endl; // helloworld
  int x = 5, y = 10;
  cout << add(x, y) << endl; // 15
  return 0;
}
