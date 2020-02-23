#include "sum.h"
#include "multi.h"

int myMulti(int C, int D) {
  int Result;
  static int StaticValue;
  for (int I = 0; I < D; I++) {
    Result = mySum(Result, C);
  }
  StaticValue = Result;
  return Result;
}

