#include <stdio.h>

int main()
{
    // program to calculate factorial of any number
    int i, N;
    printf("Enter number: ");
    scanf("%d", &N);
    int factorial = 1;
    for (i = 1; i <= N; i++)
    {
        printf("%d\n", i);
        factorial = factorial * i;
    }
    printf("factorial is: %d", factorial);

    return 0;
}