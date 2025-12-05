#include <stdio.h>
long double factorial(long double n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main() {
  long double num;
  printf("Enter the number to calculate factorial: ");
  if (!scanf("%Lf", &num)) {
    printf("Invalid input. Please enter a valid number.\n");
    return 1;
  };

  printf("Factorial of %.0Lf = %.0Lf\n", num, factorial(num));
  return 0;
}
