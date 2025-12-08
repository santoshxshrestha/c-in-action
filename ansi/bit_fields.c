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

  struct Custom scanning;
  printf("Enter value for a (3 bits): ");
  // Note: Scanf for bit fields is not directly supported in C.
  // we cannnot take the address of a bit field, so we need to use a temporary
  // variable.
  // also we need to ensure that the input value fits within the bit field
  // limits. we can use a temporary variable to read the input and then assign
  // it to the bit field.
  int temp_a;
  scanf("%d", &temp_a);
  if (temp_a < -4 || temp_a > 3) {
    printf("Value out of range for 3-bit signed field. Please enter a value "
           "between -4 and 3.\n");
  } else {
    scanning.a = temp_a;
    printf("You entered a: %d\n", scanning.a);
  }
  // Alternative direct scanf (not recommended):
  // scanf("%d", &scanning.a);
  // Lets continue with b
  printf("Enter value for b (5 bits): ");
  int temp_b;
  scanf("%d", &temp_b);
  if (temp_b < 0 || temp_b > 31) {
    printf("Value out of range for 5-bit unsigned field. Please enter a value "
           "between 0 and 31.\n");
  } else {
    scanning.b = temp_b;
    printf("You entered b: %d\n", scanning.b);
  }
  return 0;
}
