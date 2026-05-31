#include <stdio.h>

int main()
{
    // program to print last digit of any number
    
    int num, last_digit;
    printf("Enter the number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    printf("last digit of the number is: %d", last_digit);
    return 0;
}