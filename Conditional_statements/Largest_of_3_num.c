#include <stdio.h>

int main()
{
    // Pogram to find largest of three numbes
    int a, b, c;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("Largest number is: %d", a);
    }
    else if (b > a && b > c)
    {
        printf("Largest number is: %d", b);
    }
    else if (c > a && c > b)
    {
        printf("Largest number is: %d", c);
    }
    return 0;
}