#include <stdio.h>
struct Custom {
  int a : 3; // 3 bits for a
  int b : 5; // 5 bits for b
};

// we can calculate the value that can be stored in 'a' and 'b' by the use of
// the formula 2^n - 1, where n is the number of bits allocated.
// For 'a', which has 3 bits: 2^3 - 1 = 7
// For 'b', which has 5 bits: 2^5 - 1 = 31
// Thus, the maximum value that can be stored in 'a' is 7 and in 'b' is 31.
// but since 'a' is a signed bit field, it can hold values from -4 to 3.
// which can be calculated as follows:
// Minimum value: - (2^(n-1)) = - (2^(3-1)) = -4
// Maximum value: (2^(n-1)) - 1 = (2^(3-1)) - 1 = 3
int main() {
  struct Custom c;
  c.a = 2;
  c.b = 10;
  printf("The value of a: %d\n", c.a);
  printf("The value of b: %d\n", c.b);

  return 0;
}
