#include <stdio.h>

int main() {
  float total = 0.0;
  float value;
  char choice;
  scanf("%f", &value);
  total += value;
  scanf(" %c", &choice);
  while (choice != 'n') {
    scanf("%f", &value);
    total += value;
    scanf(" %c", &choice);
  }
  printf("%.2f", total);
  return 0;
}
