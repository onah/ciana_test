#include <stdio.h>

#include "sum.h"
#include "multi.h"

extern int global_value;

int main() {
  int right_value = 10;
  int left_value = 15;

  int result = my_multi(right_value, left_value);
  global_value = result;

  printf("%d\n", result);
  return 0;
}

