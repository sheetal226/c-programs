#include <stdio.h>

int main()
{
    // program to create a basic calculator
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    char choice;
    printf("  \n choose operator: \n");
    printf(" '+' - addition \n");
    printf(" '-' - subraction \n");
    printf(" '*' - multiplication \n");
    printf(" '/' - devision \n");

    printf("choose operator: ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
    {
        printf("Addition is: %.2f \n", num1 + num2);
        break;
    }
    case '-':
    {
        printf("subraction is: %.2f \n", num1 - num2);
        break;
    }
    case '*':
    {
        printf("multipplication is: %.2f", num1 * num2);
        break;
    }
    case '/':
    {
        if (num2 == 0)

            printf("it is not divisible");
        else if (num1 > num2)
            printf("division is: %.2f", num1 / num2);

        else
            printf("code is invalid");

        break;
    }

        return 0;
    }
}