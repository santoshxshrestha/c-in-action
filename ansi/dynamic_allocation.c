// In the same way we can use calloc to allocate memory dynamically
// but calloc initializes the allocated memory to zero and in different way
// than malloc. malloc takes a single argument which is the total number of
// bytes to allocate whereas calloc takes two arguments: number of elements
// and size of each element.
// it is good for allocating memory for an array of elements.
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  // this will create an array of size n in stack memory
  // int scores[n]; // Variable Length Array (VLA)

  //
  // Using dynamic memory allocation to create an array of size n in heap memory
  int *scores = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation

  //
  // we have to ckeck if malloc was successful if it is failed it returns NULL
  if (scores == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Input scores
  for (int i = 0; i < n; i++) {
    printf("Enter score for student %d: ", i + 1);
    scanf("%d", &scores[i]);
  }

  // Resize the array to hold one more score
  n++; // Increase the size by 1
  scores = realloc(
      scores,
      (n + 1) *
          sizeof(int)); // Resize the allocated memory to hold one more score
  if (scores == NULL) {
    printf("Memory reallocation failed\n");
    return 1;
  }
  // Input the new score
  printf("Enter score for student %d: ", n);
  scanf("%d", &scores[n - 1]);

  // Display scores
  printf("Scores of all students:\n");
  for (int i = 0; i < n; i++) {
    printf("Student %d: %d\n", i + 1, scores[i]);
  }

  free(scores); // Free the allocated memory

  return 0;
}
