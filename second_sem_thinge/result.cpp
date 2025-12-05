#include <iostream>
using namespace std;
class Student {
public:
  int total_marks = 0;
  int marks[5];
  void calculate_percentage() {
    cout << "Enter the marks of the student:\n";

    for (int i = 0; i < 5; i++) {
      cout << "Enter the marks of the subject " << i + 1 << ": ";
      cin >> marks[i];

      if (marks[i] > 100) {
        cout << "lol! over achiver. You Failed ;(\n";
        return;
      }

      if (marks[i] < 32) {
        cout << "You Failed ;(\n";
        return;
      }

      total_marks += marks[i];
    }

    float percentage = (float)total_marks / 5;

    cout << "Percentage: " << percentage << "%" << endl;
  };

private:
  void cant_call_me() { cout << "How did you do that? \n"; }

  // we can create a private method and call it in the public
  // method hence it can be called in the main function
  // this is only possible by member func and also we can create a friend class
public:
  void every_thing_is_possible() { cant_call_me(); }
};

int main(int argc, char *argv[]) {
  Student first;
  first.calculate_percentage();

  Student second;
  second.every_thing_is_possible();
}
