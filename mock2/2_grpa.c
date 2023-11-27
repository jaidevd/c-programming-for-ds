#include<stdio.h>
//Write function below

void print_xo_pattern(int n) {
  if (n < 1) {
    printf("INVALID");
    return;
  }
  for (int i=0;i<n;i++) {
    for (int j=0;j<(i + 1);j++) {
      if (j % 2 == 0)  { printf("x"); }
      else { printf("o"); }
    }
    printf("\n");
  }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_xo_pattern(n);
    return 0;
}
