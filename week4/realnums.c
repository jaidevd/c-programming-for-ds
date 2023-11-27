#include <stdio.h>

int main() {
  float x, f;
  scanf("%f", &x);
  if (x <= 0) {
    f = 0.0;
  } else if (x < 10) {
    f = x + 2;
  } else {
    f = x * x + 2;
  }
  printf("%.2f", f);

  return 0;

}
