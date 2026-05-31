#include <stdio.h>

int main()
{
    // Program to swap two numbers using a thid variable
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    // swap 2 numbers
    printf("after swapping: \na = %d\n", a);
    printf("b = %d", b);

    return 0;
}