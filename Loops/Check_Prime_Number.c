#include <stdio.h>

int main()
{
    int a, num = 2, prime = 1;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("%d is not a prime number", a);
        return 0;
    }

    while (num <= a - 1)
    {
        if (a % num == 0)
        {
            prime = 0;
            break;
        }
        num++;
    }

    if (prime)
    {
        printf("%d is prime number", a);
    }
    else
    {
        printf("%d is not prime number", a);
    }

    return 0;
}