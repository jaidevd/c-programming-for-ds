#include <stdio.h>
//Write function below
int count_digits(int d, long int n) {
  if (n == 0) {
    return 0;
  }
  int remainder = n % 10;
  int count = 0;
  if (remainder == d) count++;
  return count + count_digits(d, n / 10);
}


int main(){
    int d;
    long int n;
    scanf("%d %ld",&d,&n);
    printf("%d",count_digits(d,n));
}
