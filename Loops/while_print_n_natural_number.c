#include <stdio.h>

int main()
{
    // Program to print n natural numbers
    int i = 1, N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    while (i <= N)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}