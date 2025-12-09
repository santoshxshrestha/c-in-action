#include <stdio.h>
#include <stdlib.h>

struct linked_list {
  int number;
  struct linked_list *next;
};

// just a typedef
typedef struct linked_list node;

int main() {
  // creating a pointer to a node
  node *head = NULL;

  // initializing memory for the head node
  head = (node *)malloc(sizeof(node));

  // assigning values to the head node
  head->number = 10;
  head->next = NULL;

  // creating sedond node
  head->next = (node *)malloc(sizeof(node));
  head->next->number = 20;
  head->next->next = NULL;

  // creating third node
  head->next->next = (node *)malloc(sizeof(node));
  head->next->next->number = 30;
  head->next->next->next = NULL;

  // this procell will become clumsy with more nodes
  // so we have to implement this thinge by the use of the recursion and
  // iteration techniques I thing I ll do this in dsa thinge later

  printf("this is the main function \n");
  return 0;
}
