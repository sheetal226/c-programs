#include <stdio.h>

int main()
{
    // Program to identify whether a number is positive , negative or zero
   
    float num;
    printf("Enter the Number: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf(" Number is positive ");
    }
    else if (num < 0)
    {
        printf("NUmber is Negative ");
    }
    else
    {
        printf("Number is Zero");
    }

    return 0;
}