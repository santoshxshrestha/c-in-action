// In C++,
//     aggregation is a “has - a” relationship where one class stores a pointer
//     or
//         reference to an object of another class,
//     and that object’s lifetime is independent of the container class.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Book {
public:
  string title;
  string author;
  Book(string title, string author) {
    this->title = title;
    this->author = author;
  }

public:
};

class Library {
  Book *book;

public:
  Library(Book *book) { this->book = book; }

  void displayInfo() {
    cout << "title: " << book->title << "& " << "author: " << book->author
         << endl;
  }
};

int main() {
  Library physics = new Book("Physics", "santosh");
  physics.displayInfo();
  return 0;
}
