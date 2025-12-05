//
// The diamond problem in C++ occurs in multiple inheritance when
//     a class inherits from two classes that both inherit from a common
//         base class.This creates an inheritance structure shaped like a
//         diamond:
//
// ```
//     A
//    / \
//   B   C
//    \ /
//     D
// ```
//
// Here’s what happens:
//
// - Class B and class C both inherit from class A.
// - Class D inherits from both B and C.
//
// **Problem:**
// If D accesses a member of A, it’s ambiguous whether it should use the A from
// B or the A from C, because D contains two separate copies of A.
//
//**Solution:**
// we have to use virtual inheritance to ensure that there is only one
//
#include <iostream>
class A {
public:
  int a;
};
class b : virtual public A {};
class c : virtual public A {};

class child : public b, public c {};

// virtual public A ensures that only one shared instance of A exists in D,
// instead of two separate ones.
int main() {
  child d;
  d.a = 10; // No ambiguity, only one instance of A
  std::cout << "Diamond problem resolved with virtual inheritance."
            << std::endl;
  return 0;
}
