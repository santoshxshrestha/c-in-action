#include <iostream>
using namespace std;

class Main {
public:
  void func();
  void main();
};

void Main::func() { cout << "this is the func mehtod" << endl; };
void Main::main() { cout << "this is the main method " << endl; }
int main() {
  Main obj;
  obj.func();
  obj.main();
  return 0;
}
