#include <stdio.h>
int main() {
  for (int i = 0, j = 10; i < 10 && j > 0; i++, j--) {
    printf("i: %d, j: %d\n", i, j);
  }
  return 0;
}
