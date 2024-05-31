#include "../common/rand_arr.h"
#include "bubbleSort.h"
#include <stdio.h>

#define ARR_SIZE 10

int main(void) {
  int arr[ARR_SIZE];
  rand_arr(arr, ARR_SIZE);

  puts("\nUnsorted Array: ");
  for (size_t i = 0; i < ARR_SIZE; ++i) {
    printf("%d ", arr[i]);
  }

  bubble_sort(arr, ARR_SIZE);

  puts("\nSorted Array: ");
  for (size_t i = 0; i < ARR_SIZE; ++i) {
    printf("%d ", arr[i]);
  }
  puts("");

  return 0;
}
