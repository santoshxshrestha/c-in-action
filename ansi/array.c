#include <stdio.h>
int function(int array[], int lenght_of_array) {
  int sum = 0;
  for (int i = 0; i < lenght_of_array; i++) {
    sum += array[i];
  }
  return sum;
}

void func(int rows, int cols, int array[][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++)
      printf("%d\n", array[i][j]);
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int lenght_of_array = sizeof(array) / sizeof(array[0]);
  printf("The sum of the each element of the array is %d \n\n",
         function(array, lenght_of_array));

  int two_dimenstion[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  func(3, 3, two_dimenstion);

  return 0;
}
