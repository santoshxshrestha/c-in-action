#include <iostream>
using namespace std;

class Main {
private:
  int private_var;

protected:
  int protected_var;

public:
  Main() {
    private_var = 12;
    protected_var = 31;
  }

  friend class Friend;
};

class Friend {
public:
  void display(Main &obj) {
    cout << "Private variable :" << obj.private_var << ".\n";
    cout << "Protected variable is :" << obj.protected_var << "\n";
  }
};

int main() {
  Main m;
  Friend f;
  f.display(m);
  return 0;
}
