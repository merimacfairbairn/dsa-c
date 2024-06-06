#ifndef STACK_H
#define STACK_H

typedef struct Node {
  int value;
  struct Node *prev;
} Node;

typedef struct {
  Node *head;
  int len;
} Stack;

Stack *const constructor();
void push(Stack *const this, int item);
int pop(Stack *const this);
int peek(Stack *const this);

#endif
