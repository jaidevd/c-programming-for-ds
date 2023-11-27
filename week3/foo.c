#include <stdio.h>

int main() {
  int a = 1, b = 1, c = 1;
  int x;
  b += c;
  a += b;
  // a += b += c;
  printf("%d\t%d\t%d\n", a, b, c);
  return 0;
}
