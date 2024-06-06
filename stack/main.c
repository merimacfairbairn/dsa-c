#include "stack.h"
#include <stdio.h>

int main(void) {
  Stack *const s = constructor();
  push(s, 10);
  printf("%d\n", peek(s));
  push(s, 20);
  printf("%d\n", peek(s));
  printf("Popped: %d\n", pop(s));
  printf("Left: %d\n", peek(s));
  printf("Popped: %d\n", pop(s));
  printf("Left: %d\n", peek(s));

  return 0;
}
