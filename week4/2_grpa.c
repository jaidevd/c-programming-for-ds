#include <stdio.h>

int main() {
  float weight;
  int zone, cost;

  scanf("%f", &weight);
  scanf("%d", &zone);

  if (weight < 0 || zone < 1 || zone > 7) {
    printf("Invalid Input");
    return 0;
  }

  if (zone == 1) {
    cost = 5;
  } else if (zone == 2) {
    cost = 7;
  } else if (zone == 3) {
    cost = 10;
  } else if (zone == 4) {
    cost = 12;
  } else if (zone == 5) {
    cost = 16;
  } else if (zone == 6) {
    cost = 17;
  } else {
    cost = 19;
  }
  printf("%.2f", cost * weight);
  return 0;
}
