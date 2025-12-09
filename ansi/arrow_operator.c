#include <stdio.h>

struct Custom {
  char name[20];
  int number;
  float cost;
} peoples[2], *ptr;

int main() {
  // here the ptr is pointing to the first element of the array peoples
  ptr = peoples;

  ptr->number = 12121231;
  snprintf(ptr->name, sizeof(ptr->name),
           "santosh"); // using snprintf to copy the string
  ptr->cost = 12141242;
  printf("The name of the people is %s,\n number is %d and \n cost is %f",
         ptr->name, ptr->number, ptr->cost);
  return 0;
}
