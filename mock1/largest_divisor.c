#include <stdio.h>

int main() {
  int n, div;
  int found = 0;
  scanf("%d", &n);
  for (int i=2; i<=(n / 2); i++) {
    if (n % i == 0) {
      div = n / i;
      found = 1;
      break;
    }
  }
  if (!found) {
    div = 1;
  }
  printf("%d", div);
  return 0;
}
