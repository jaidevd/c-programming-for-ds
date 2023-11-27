#include <stdio.h>
#define N 5

int main() {
  int eid[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &eid[i]);
  }
  for (int j = 0; j < N; j++) {
    int prev = eid[j - 1];
    int current = eid[j];
    int sum = prev + current;
    if ((sum % 2) != 0) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}
