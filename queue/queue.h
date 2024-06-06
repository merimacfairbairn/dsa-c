#ifndef QUEUE_H
#define QUEUE_H

typedef struct node {
  int value;
  struct node *next;
} Node;

typedef struct {
  Node *head;
  Node *tail;
  int len;
} Queue;

Queue *const constructor(void);
void enqueue(Queue *const this, int item);
int deque(Queue *const this);
int peek(Queue *const this);

#endif
