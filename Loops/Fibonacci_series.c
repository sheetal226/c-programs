#include <stdio.h>

int main()
{
    // program to print fibonacci series

    int next, num, fibonacci, i = 1;
    num = 0;
    next = 1;
    while (i <= 10)
    {
        fibonacci = num + next;
        num = next;
        next = fibonacci;
        i++;

        printf("fibonacci num %d\n", num);
    }

    return 0;
}