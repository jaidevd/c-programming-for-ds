#include <stdio.h>

int main() {
  int a, b, c, R = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  R = (a * a * a) + (b * b * b) + (c * c * c) + (3 * a * b * c) - 2 * (a + b + c);

  printf("%d", R);
  return 0;
}
