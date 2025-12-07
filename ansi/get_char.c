#include <stdio.h>
int main() {
  printf("Enter a character: ");

  // It returns the int value of the character read as an unsigned char cast to
  // an int
  int character = getchar();
  printf("You entered: '%c' (ASCII code: %d)\n", character, character);
  return 0;
}
