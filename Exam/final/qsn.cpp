#include <fstream>
#include <iostream>
using namespace std;
class Movie {
public:
  string name;
  string genre;

  void write() {
    if (genre == "comedy") {
      ofstream file("comedy.md");
      file << name;
      file.close();
      cout << "done" << endl;
    } else if (genre == "action") {
      ofstream file("action.md");
      file << name;
      file.close();
      cout << "done " << endl;
    } else {
      cout << "fuck off!!! " << endl;
    }
  }
};
int main() {
  Movie horror;
  horror.name = "kanchana";
  horror.genre = "horror";
  horror.write();

  Movie obj;
  obj.name = "end game";
  obj.genre = "action";
  obj.write();
  return 0;
}
