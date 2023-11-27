#include <stdio.h>

int main() {
  int i = 2025, j = 0;
  while (( i /= 2) > 0) j++;
  printf("%d", j);
  return 0;
}
