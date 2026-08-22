#include <stdio.h>

int main()
{
    // program to print sum of digits 
    int num, digit, sum;

    printf("Enter number: ");
    scanf("%d", &num);

    for (sum = 0; num != 0; sum)
    {

        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("sum = %d", sum);

    return 0;
}