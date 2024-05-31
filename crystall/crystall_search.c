#include "crystall_search.h"
#include <math.h>

int crystall_search(const bool *breaks, size_t len) {
  const unsigned int jmpAmount = sqrt(len);
  size_t i = jmpAmount;
  for (; i < len; i += jmpAmount) {
    if (breaks[i]) {
      break;
    }
  }

  i -= jmpAmount;

  for (size_t j = 0; j <= jmpAmount && i < len; ++j, ++i) {
    if (breaks[i]) {
      return i;
    }
  }

  return -1;
}
