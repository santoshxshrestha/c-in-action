#include <iostream>
#include <ostream>
using namespace std;
class Rectangle {
private:
  int l, b;

public:
  void setdata();
  void area();
  void perimeter();
};

void Rectangle::setdata() {
  cout << "Enter the length of the rect:";
  cin >> l;
  cout << "Enter the breath of the rect:";
  cin >> b;
}
void Rectangle::area() { cout << "Area is " << l * b << endl; }
void Rectangle::perimeter() {
  cout << "The perimeter is " << 2 * (l + b) << endl;
}

int main() {
  Rectangle r;
  r.setdata();
  r.area();
  r.perimeter();
}
