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
  {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = array; // Point to the first element of the array
    // Access array elements using pointer arithmetic
    for (int i = 0; i < 10; i++) {
      // Accessing array elements using pointer arithmetic is more fast compared
      // to array indexing
      printf("Element %d: %d\n", i, *(ptr + i));
    }
  }

  // using pointer to save memory
  {
    // // still this will take the 25*3 = 75 bytes of memory
    // char name[3][25] = {"Alice", "Bob", "Charlie"};
    // by doing this way it will take only 8*3 = 24 bytes of memory
    char *name[] = {"Alice", "Bob", "Charlie"};
    for (int i = 0; i < 3; i++) {
      printf("Name %d: %s\n", i, name[i]);
    }
  }
  return 0;
}
