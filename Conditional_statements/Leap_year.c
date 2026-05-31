#include <stdio.h>

int main()
{
    // Program to determine if a year is a leap year

    int leap_year;
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    // using divisibility rules of 4, 100, and 400
    if (year % 400 == 0)
    {
        printf("it is a leap year");
    }
    if (year % 4 != 0)
    {
        printf("it is not a leap ");
    }
    else if (year % 100 == 0 && year % 400 != 0)
    {
        printf("it is not a leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("it is a leap year");
    }
    return 0;
}