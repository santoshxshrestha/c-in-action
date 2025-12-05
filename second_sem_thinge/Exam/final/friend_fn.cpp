#include <iostream>
#include <string>
using namespace std;
class Main {
private:
  string name;

public:
  Main(string n) : name(n) {}
  friend void display(Main &m);
};

void display(Main &M) {
  cout << "the name of the object is " << M.name << endl;
}

int main() {
  Main obj("John");
  display(obj);
  return 0;
}
