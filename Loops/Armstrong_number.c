#include <stdio.h>
#include <math.h>

int main()
{
    // Program to check armstrong number
    int num, digit, count = 0, armstrong = 0, original_num, sum,temp;
    printf("Enter number: ");
    scanf("%d", &num);
    original_num = num;
    temp = num;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    num = temp;

    while (num != 0)
    {
        digit = num % 10;
        armstrong = pow(digit, count) + armstrong;
        num = num / 10;
    }
    printf("armstrong number is: %d\n", armstrong);
    if (original_num == armstrong)
    {

        printf("it an armstrong number");
    }
    else
    {
        printf("it is not armstrong number");
    }

    return 0;
}