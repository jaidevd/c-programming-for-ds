#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a == b || b == c || a == c) {
    if (a == b && b == c) {
      printf("Equilateral");
    } else {
      printf("Isosceles");
    }
    return 0;
  }
  printf("Scalene");
  return 0;
}
