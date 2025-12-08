#include <stdio.h>
int function(int array[], int lenght_of_array) {
  int sum = 0;
  for (int i = 0; i < lenght_of_array; i++) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int lenght_of_array = sizeof(array) / sizeof(array[0]);
  printf("The sum of the each element of the array is %d ",
         function(array, lenght_of_array));

  return 0;
}
