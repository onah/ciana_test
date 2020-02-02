#include "sum.h"
#include "multi.h"

int my_multi(int c, int d) {
  int result;
  static int static_value;
  for (int i = 0; i < d; i++) {
    result = my_sum(result, c);
  }
  static_value = result;
  return result;
}

