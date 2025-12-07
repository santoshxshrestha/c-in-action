#include <stdio.h>
#include <stdlib.h>
int main() {
  for (int i = 0, j = 10; i < 10 && j > 0; i++, j--) {
    printf("i: %d, j: %d\n", i, j);
  }

  int i = 0;
  for (;;) {
    printf("i outside loop: %d\n", i);
    i++;
    if (i >= 5) {
      // exit the program
      exit(0);
    }
  }

  return 0;
}
