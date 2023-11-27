#include <stdio.h>
#include <math.h>

int main()
{
    // Initialize required Variables
    float radius, height;
    double volume;

    // Read inputs: radius and height
    scanf("%f", &radius);
    scanf("%f", &height);

    // Calculate the volume of the cylinder
    volume = 3.14 * pow(radius, 2) * height;

    // Print Volume of the cylinder upto two decimal point
    printf("%.2f", volume);

    return 0;
}
