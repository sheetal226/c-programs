#include <stdio.h>
int main()
{
     // Program to calculate overall percentage and check pass/fail status
    float maths, physics, chemistry, overall_percentage;
    printf("enter maths marks: ");
    scanf("%f", &maths);
    printf("enter physics marks: ");
    scanf("%f", &physics);
    printf("enter chemistry marks: ");
    scanf("%f", &chemistry);

    overall_percentage = (maths + physics + chemistry) / 3.0;

    if (overall_percentage >= 40 && overall_percentage <= 100)
    {
        printf("congratuations student is pass %.2f \n", overall_percentage);
    }
    else
    {
        printf("student is fail \n");
    }
    if (maths <= 33)
    {
        printf("student is fail in math \n");
    }
    if (physics <= 33)
    {
        printf("student is fail in physics \n");
    }
    if (chemistry <= 33)
    {
        printf("student is fail in chemistry \n");
    }

    return 0;
}