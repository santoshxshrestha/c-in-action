// one feet == 12 inch;
#include <iostream>
using namespace std;
class Distance {
private:
  int feet;
  int inch;

public:
  Distance(int feet, int inch) {
    this->feet = feet;
    this->inch = inch;
  }
  int memberFunc() { return (this->feet * 12 + inch); }
  friend int friendFunc(Distance &obj);
};
int friendFunc(Distance &obj) { return (obj.feet * 12 + obj.inch); }

int main() {
  Distance obj(1, 1);
  cout << "the distance is " << obj.memberFunc() << endl;
  Distance anotherObj(2, 2);
  cout << "the distance is " << friendFunc(anotherObj) << endl;

  return 0;
}
