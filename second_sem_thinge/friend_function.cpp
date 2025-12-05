#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
  int password = 1231;

private:
  string username = "santosh";

public:
  // Here this is the declaration of friend function
  friend void login(Account &account);

  // Here this is the member function
  void login() {
    cout << "password:" << password << "\nusername:" << username << ".\n";
  }
};

void login(Account &account) {
  cout << "[frient login] password: " << account.password
       << "\n[friend login] username: " << account.username << "\n";
}

int main() {
  Account my_account;
  cout << "calling member function:\n";
  my_account.login();
  cout << "";

  cout << "Calling the friend function:\n";
  login(my_account);

  return 0;
}
