#include <stdio.h>
int by_value(int a, int b) { return a + b; }
int by_reference(int *a, int *b) { return *a + *b; }
int main() {
  int a = 5;
  int b = 10;
  printf("By Value: %d + %d = %d\n", a, b, by_value(a, b));
  printf("By Reference: %d + %d = %d\n", a, b, by_reference(&a, &b));

  return 0;
}
