#include <stdio.h>

// These are called preprocessor directives. They are instructions to the
// compiler
#define MAX_BUFFER_SIZE 1024
// here we define a constant for maximum buffer size which will be same
// throughout the program This helps in maintaining consistency and makes it
// easier to update the value if needed.
#define STRING "HELLO SANTOSH"

int main() {
  printf("Hello, world\n");
  printf("Max buffer size is %d\n", MAX_BUFFER_SIZE);
  printf("The string is: %s\n", STRING);
  return 0;
}
