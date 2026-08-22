#include <stdio.h>

int main()
{
    // progam to count digits of any number
    int num, count;
    printf("Enter numbers: ");
    scanf("%d", &num);
    if (num == 0)
    {
        count = 1;
    }
    else
    {

        for (count = 0; num != 0; count++)
        {
            printf("number is divided by 10: %d\n", num);
            num = num / 10;
        }
    }
    printf("number of digits are: %d", count);
    return 0;
}