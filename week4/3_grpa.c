#include <stdio.h>
#include <math.h>

void main() {
  float amount, principal, rate;
  double scale;
  int period, freq;
  scanf("%f", &principal);
  scanf("%f", &rate);
  scanf("%d", &period);
  scanf("%d", &freq);

  for (int i = 1; i <= period; i++) {
    for (int j = 1; j <= freq; j++) {
      scale = pow(1 + rate / j / 100, j * i);
      amount = principal * scale;
    }
    printf("%.2f\n", amount);
  }


  return;
}
