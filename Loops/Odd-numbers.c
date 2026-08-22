#include <stdio.h>

int main()
{
    // program to print odd numebers
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {

            printf("Odd number: %d\n", i);
        }
    }

    return 0;
}