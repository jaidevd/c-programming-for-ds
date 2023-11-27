#include <stdio.h>
#include <math.h>
int main()
{
    //Initialization of variables
    float principal, annualRate, monthlyRate, monthlyPayment;
    int numMonths;

	//Reading Inputs
    scanf("%f", &principal);
    scanf("%f", &annualRate);
    scanf("%d", &numMonths);
    // Write code below to calculate the monthly payment and store the result in monthlyPayment variable
    double foo = pow(1 + annualRate / 12 / 100, numMonths);
    monthlyPayment = principal * (annualRate / 12 / 100) * foo / (foo - 1.0);

   //Printing the output
    printf("%.2f", monthlyPayment);
    return 0;
}
