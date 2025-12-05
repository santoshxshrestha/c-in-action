// The default destructor works fine unless we have dynamically allocated memory
// or pointer in class here we have dynamically allocated memory so we use the
// delete keyword to deallocated memory this prevents the memory leaks
#include <iostream>
using namespace std;

class Safe {
private:
  int *pin;

public:
  Safe(int value) {
    this->pin = new int;
    *pin = value;
    cout << "Your pin is" << *pin << endl;
  }
  ~Safe() {
    delete pin;
    cout << "Destructor: Memory deallocated\n";
  }
};

int main() {
  Safe atm(1111);
  return 0;
}
