#include "binary_search.h"
#include <stdio.h>

#define NEEDLE 3

int sorted_array[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(void) {
  bool found = binary_search(sorted_array, 11, NEEDLE);

  for (size_t i = 0; i < 11; i++) {
    printf("%d ", sorted_array[i]);
  }
  printf("\n%s %d\n", found ? "found" : "not found", NEEDLE);

  return 0;
}
