#include <stdio.h>
int main() {
  char name[50];
  printf("Enter you name:");
  scanf("%49[a-z]", name);
  printf("Your name is %s", name);
  return 0;
}
