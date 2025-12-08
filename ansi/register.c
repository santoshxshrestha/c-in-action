#include "sys/types.h"
#include <stdio.h>
int main() {
  // this is a custom type
  for (register_t i = 0; i < 10; i++) {
    printf("The content in the register is %li\n", i);
  }

  // this is a type which will acutally use register to store the frequently
  // accessed variable but the latest versions of the compiler auto optimised we
  // can't send the pointer of it to some where else
  for (register int i = 0; i < 10; i++) {
    printf("The content in the register is %d\n", i);
  }

  return 0;
}
