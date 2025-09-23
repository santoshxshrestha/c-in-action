#include <iostream>
using namespace std;
class Func {
public:
  static int count;
  Func() { count++; }
};

int Func::count = 0;

int main() {
  Func obj;
  cout << "count is" << obj.count << endl;
  return 0;
}
