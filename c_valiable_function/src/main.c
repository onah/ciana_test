#include <stdio.h>

#include "sum.h"
#include "multi.h"

extern int GlobalValue;

int main() {
  int RightValue = 10;
  int LeftValue = 15;

  int Result = myMulti(RightValue, LeftValue);
  GlobalValue = Result;

  printf("%d\n", Result);
  return 0;
}

