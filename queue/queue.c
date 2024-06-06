#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

Queue *const constructor() {
  Queue *q = malloc(sizeof(Queue));
  q->head = NULL;
  q->tail = NULL;
  q->len = 0;
  return q;
}

void enqueue(Queue *const this, int item) {
  ++this->len;
  Node *new = malloc(sizeof(Node));
  new->value = item;
  if (!this->tail) {
    this->tail = this->head = new;
    return;
  }

  this->tail->next = new;
  this->tail = new;
}

int deque(Queue *const this) {
  if (!this->head) {
    fprintf(stderr, "Queue is empty\n");
    return -1;
  }

  --this->len;

  Node *tmp = this->head;
  int element = tmp->value;
  this->head = this->head->next;

  free(tmp);
  return element;
}

int peek(Queue *const this) {
  if (!this->head) {
    fprintf(stderr, "Queue is empty\n");
    return -1;
  }
  return this->head->value;
}
