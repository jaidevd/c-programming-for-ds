#include <stdio.h>

int main()
{
    int gender, age;
    float weight, height, activity, calories;
    //Initialize other required variables

    // Read inputs: age, gender, weight, height and activity factor
    scanf("%d", &age);
    scanf("%d", &gender);
    scanf("%f", &weight);
    scanf("%f", &height);
    scanf("%f", &activity);

    // Calculate the recommended daily calorie intake
    if (gender == 1)
    {
      calories = (88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age)) * activity;
    }
    if (gender == 2)
    {
      calories = (447.593 + (9.247 * weight) + (3.098 * height) - (4.33 * age)) * activity;
    }
    printf("%.2f", calories);
	// Print the output up to two decimal point

    return 0;
}
