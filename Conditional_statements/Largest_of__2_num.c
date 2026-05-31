#include <stdio.h>

int main()
{
    // Pogram to find largest of two numbers
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Largest number is: %d", a);
    }
    else if (b > a)
    {
        printf("Largest number is: %d", b);
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}