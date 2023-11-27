#include <stdio.h>
#define N 5

int addNum(int *a, int numVals) {
  int i, sum = 0;
  for (i = 0; i < numVals; i++) {
    sum += a[i];
  }
  return sum;
}

void main() {
  int A[N] = {1, 2, 3, 4, 5};
  int sum = addNum(A, N);
  printf("Sum = %d\n", sum);
  return;
}
