// the the extern keyword can be use to get the variable in scope
#include <stdio.h>

int function();
void func();
int main() {
  function();
  extern int x;
  printf("This content of the x is %d\n", x);
  func();
  return 0;
}

// declared the var x
int function() {
  extern int x;
  printf("This content of the x is %d\n", x);
  return 0;
}
int x = 0;

void func() {
  extern char name[];
  printf("your name is %s\n", name);
}
char name[10] = "Santosh";
