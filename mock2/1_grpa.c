#include <stdio.h>
//Write function below

int calculateRentalCost(int nDays, int carType) {
  int cost;
  if (carType == 1) {
    cost = 500;
  } else if (carType == 2) {
    cost = 700;
  } else if (carType == 3) {
    cost = 1000;
  }
  return cost * nDays;
}

int main()
{
    int days,type,res;
    scanf("%d",&days);
    scanf("%d",&type);
    res = calculateRentalCost(days,type);
    printf("%d", res);
    return 0;
}
