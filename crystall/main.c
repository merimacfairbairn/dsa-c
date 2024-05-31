#include "crystall_search.h"
#include <stdio.h>

#define ARR_SIZE 8
bool arr[ARR_SIZE] = {false, false, false, false, true, true, true, true};

int main(void) {
  int result = crystall_search(arr, ARR_SIZE);
  printf("Breaks at index: %d\n", result);

  return 0;
}
