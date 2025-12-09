#include <stdio.h>
int main() {
  // // avoide this type of programming
  // int *ptr = (int *)0x1234567; // Replace with a valid memory address
  // *ptr = 42;                   // Write the value 42 to the memory location
  // printf("Pointer address: %d\n", *ptr);
  int var = 10;
  int *pointer_val = &var;
  printf("Pointer address: %p\n", pointer_val);
  pointer_val++;
  printf("Pointer address after increment: %p\n", pointer_val);
  return 0;
}
