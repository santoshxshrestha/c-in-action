#include <assert.h>
#include <stdatomic.h>
#include <stdio.h>
#define MAXSIZE 10
#define true 1
#define false 0

typedef struct Stack {
  int tos;
  int items[MAXSIZE];
} stack;

int isfull(stack *stack) {
  if (stack->tos == MAXSIZE)
    return true;
  return false;
}

int isempty(stack *stack) {
  if (stack->tos == -1)
    return true;
  return false;
}

void push(stack *stack, int data) {
  int tos = stack->tos;
  if (tos == -1) {
    tos++;
  }
  if (!isfull(stack)) {
    stack->items[tos] = data;
    tos++;
  }
}

int pop(stack *stack) {
  int tos = stack->tos;
  if (!isempty(stack)) {
    tos--;
    return stack->items[tos];
  } else {
    printf("Error: couldn't pop the content");
  }
}

void isempty_test() {
  stack my_stack;
  my_stack.tos = -1;
  assert(isempty(&my_stack) == true);
}

void isfull_test() {
  stack my_stack;
  my_stack.tos = 10;
  assert(isfull(&my_stack) == true);
}

void push_test() {
  stack my_stack;
  my_stack.tos = -1;
  push(&my_stack, 12);
  assert(my_stack.items[my_stack.tos - 1] == 12);
}

void pop_test() {
  stack my_stack;
  my_stack.tos = -1;
  push(&my_stack, 12);
  assert(pop(&my_stack) == 12);
}

int main() {
  isempty_test();
  isfull_test();
  push_test();
  pop_test();
  return 0;
}
