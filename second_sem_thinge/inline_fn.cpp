#include <iostream>
using namespace std;
/// here we are creating inline func
inline int square(int x) { return x * x; }

int main() {
    // instead of calling the fn the inline one it is putted here in the place of the use of it 
  cout << "The square of 4 is " << square(4) << ".\n";
  cout << "The square of 7 is " << square(7) << ".\n";
  return 0;
}
