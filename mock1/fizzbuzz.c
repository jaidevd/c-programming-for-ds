#include <stdio.h>

int main() {
  int a, b, count = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  for (;a<=b; a++) {
    if (a % 15 == 0) {
      continue;
    } else if (a % 3 == 0 || a % 5 == 0) {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
