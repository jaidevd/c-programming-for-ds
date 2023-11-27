#include <stdio.h>
#include <math.h>
int main()
{
    // Initialization of Variables
    float diameter, costPerSqInch, costperTopping, totalCost;
    int numToppings;

    // Reading Input
    scanf("%f", &diameter);
    scanf("%f", &costPerSqInch);
    scanf("%d", &numToppings);
    scanf("%f", &costperTopping);
    // Write code below to calculate the total cost and store the result in totalCost variable

    float radius = diameter / 2.0;
    float area = 3.14 * radius * radius;
    float toppingCost = numToppings * costperTopping;
    float pizzaCost = area * costPerSqInch;
    totalCost = pizzaCost + toppingCost;



    // Print the total cost
    printf("%.2f", totalCost);
    return 0;
}
