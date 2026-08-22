#include <stdio.h>

int main()
{
    // program to print number in reverse order
    int num, reverse, digit;
    printf("Enter number: ");
    scanf("%d", &num);

    for (reverse = 0; num != 0; reverse)
    {

        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    printf("reverse numbers are: %d", reverse);
    return 0;
}