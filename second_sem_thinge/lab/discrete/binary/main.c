#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binaryToDecimal(const char *binary) {
  int decimal = 0;
  for (int i = 0; binary[i] != '\0'; ++i) {
    decimal = decimal * 2 + (binary[i] - '0');
  }
  return decimal;
}

void decimalToBinary(int num, char *output) {
  if (num == 0) {
    strcpy(output, "0");
    return;
  }

  char temp[65];
  int i = 0;

  while (num > 0) {
    temp[i++] = (num % 2) + '0';
    num /= 2;
  }

  temp[i] = '\0';
  for (int j = 0; j < i; ++j) {
    output[j] = temp[i - j - 1];
  }
  output[i] = '\0';
}

int main() {
  char bin1[65], bin2[65];
  char result[65];

  printf("Enter first binary number: ");
  scanf("%64s", bin1);
  printf("Enter second binary number: ");
  scanf("%64s", bin2);

  int a = binaryToDecimal(bin1);
  int b = binaryToDecimal(bin2);

  printf("\nDecimal values: a = %d, b = %d\n", a, b);

  decimalToBinary(a + b, result);
  printf("Addition (a + b) = %s\n", result);

  // Multiplication
  decimalToBinary(a * b, result);
  printf("Multiplication (a * b) = %s\n", result);

  if (b != 0) {
    decimalToBinary(a / b, result);
    printf("Division (a / b) = %s\n", result);
  } else {
    printf("Division (a / b) = undefined (cannot divide by zero)\n");
  }

  return 0;
}
