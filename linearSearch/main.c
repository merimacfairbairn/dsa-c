#include "../common/rand_arr.h"
#include "linear.h"
#include <stdbool.h>
#include <stdio.h>

#define ARR_SIZE 10
#define NEEDLE 4

int main(void) {
  int arr[ARR_SIZE];
  rand_arr(arr, ARR_SIZE);

  printf("\nArray: \n\t");
  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d ", arr[i]);
  }

  bool found = linear_search(arr, ARR_SIZE, NEEDLE);
  printf("\nFound %d?: \n\t%s\n", NEEDLE, found ? "yes" : "no");

  return 0;
}
