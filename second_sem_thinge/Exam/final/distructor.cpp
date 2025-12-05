#include <iostream>
using namespace std;
class Main {
public:
  int *data;
  Main(int value) {
    data = new int;
    *data = value;
  }
  void display() { cout << "The value is " << *data << endl; }
  ~Main() {
    cout << "Destructor called" << endl;
    delete data;
  }
};
int main() {
  Main obj(23);
  obj.display();
  return 0;
}
