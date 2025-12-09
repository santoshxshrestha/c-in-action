#include <stdio.h>
int add(int a, int b) {
  int sum = a + b;
  return sum;
}
int main() {
  // Pointer to function
  int (*get_sum)();
  get_sum = add;

  int a = 5, b = 10;
  // This is now not supported in all versions of C
  int result = (*get_sum)(a, b);
  printf("Sum of %d and %d is: %d\n", a, b, result);

  return 0;
}
