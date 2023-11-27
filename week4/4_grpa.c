#include <stdio.h>

void main() {
  int days, daily;
  int sum = 0;
  scanf("%d", &days);
  for (int i = 0; i < days; i++) {
    scanf("%d", &daily);
    sum += daily;
  }
  printf("%d", sum);
  return;
}
