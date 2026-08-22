#include <stdio.h>

int main()
{
    // Program to check even number
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {

            printf("Even number: %d\n", i);
        }
    }

    return 0;
}