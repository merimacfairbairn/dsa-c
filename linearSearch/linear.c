#include "linear.h"

bool linear_search(int *haystack, size_t len, int needle) {
  for (int i = 0; i < len; i++) {
    if (haystack[i] == needle) {
      return true;
    }
  }
  return false;
}
