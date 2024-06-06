#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack *const constructor() {
  Stack *const s = malloc(sizeof(Stack));
  s->head = NULL;
  s->len = 0;
  return s;
}

void push(Stack *const this, int item) {
  ++this->len;
  Node *new = malloc(sizeof(Node));
  new->value = item;
  if (!this->head) {
    this->head = new;
    return;
  }

  new->prev = this->head;
  this->head = new;
}

int pop(Stack *const this) {
  if (this->len <= 0) {
    fprintf(stderr, "Stack is empty\n");
    return -1;
  }

  --this->len;
  Node *tmp = this->head;
  int value = tmp->value;
  if (this->len == 0) {
    this->head = NULL;
    free(tmp);
    return value;
  }

  this->head = this->head->prev;

  free(tmp);
  return value;
}

int peek(Stack *const this) {
  if (!this->head) {
    fprintf(stderr, "Stack is empty\n");
    return -1;
  }
  return this->head->value;
}
