#include "queue.h"
#include <stdio.h>

int main(void) {
  Queue *const q = constructor();
  enqueue(q, 10);
  printf("%d\n", peek(q));
  enqueue(q, 20);
  printf("%d\n", peek(q));
  int val = deque(q);
  printf("dequed: %d\n", val);
  printf("head: %d\n", peek(q));
  deque(q);
  deque(q);
  printf("head: %d\n", peek(q));

  return 0;
}
