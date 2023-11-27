#include <stdio.h>

int main() {
  float amount, discount;
  scanf("%f", &amount);
  if (amount < 200) {
    discount = 0.0;
  } else if (amount <= 500) {
    discount = 0.1;
  } else { discount = 0.2; }
  amount -= (amount * discount);
  printf("%.2f", amount);
  return 0;
}
