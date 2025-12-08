#include <stdio.h>

union Data {
  int i;
  float f;
  char str[20];
};

int main() {
  union Data data;

  // Assign and print integer value
  data.i = 10;
  printf("data.i: %d\n", data.i);

  // Assign and print float value
  // Note: This will overwrite the previous value of data.i
  data.f = 220.5;
  printf("data.f: %.2f\n", data.f);

  // Trying to print the data.i again will give unpredictable results
  printf("data.i after assigning data.f: %d\n", data.i);

  // Assign and print string value
  snprintf(data.str, sizeof(data.str), "Hello, World!");
  printf("data.str: %s\n", data.str);

  // Trying to print the data.f again will give unpredictable results
  printf("data.f after assigning data.str: %.2f\n", data.f);

  return 0;
}
