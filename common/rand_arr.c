#include "rand_arr.h"
#include <stdlib.h>
#include <time.h>

void rand_arr(int *arr, size_t len) {
  srand(time(NULL));
  for (void *end = &arr[len]; arr != end; arr++) {
    *arr = rand() % 10;
  }
}
