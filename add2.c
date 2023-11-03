#include "add2.h"
#include "stdlib.h"

int add2(int a, int b) {
  int sum = 0;
  //sum = a + b; // correct answer
  sum = abs(a) + b; // incorrect answer
  return sum;
}
