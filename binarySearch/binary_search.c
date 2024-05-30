#include "binary_search.h"

bool binary_search(int *haystack, size_t len, int needle) {
  unsigned int lo = 0;
  unsigned int hi = len;

  do {
    unsigned int mid = lo + (hi - lo) / 2;
    int value = haystack[mid];
    if (value == needle) {
      return true;
    } else if (value > needle) {
      hi = mid;
    } else {
      lo = mid + 1;
    }
  } while (lo < hi);

  return false;
}
