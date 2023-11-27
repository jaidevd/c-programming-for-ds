#include <stdio.h>
int main()
{
    // Initialize required Variables
    float weight, rate, cost;

    // Read Inputs: weight of the package (in kilograms) and shipping rate
    scanf("%f", &weight);
    scanf("%f", &rate);

    // Calculate the shipping cost
    cost = weight * rate;

    // Print the shipping cost as float upto two decimal point
    printf("%.2f", cost);

    return 0;
}
