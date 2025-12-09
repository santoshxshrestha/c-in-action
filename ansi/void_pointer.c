#include <stdio.h>
int main() {
  printf("This is the proogram to demonstrate void pointer in t c\n");
  int val = 100;
  void *ptr;
  ptr = &val;
  // this is how we get the inner value of void data type by the use of the
  // thinge called type casting
  // we can do some generic magic like in rust by this way
  printf("The value under val variable is :%d", *(int *)ptr);
  return 0;
}
