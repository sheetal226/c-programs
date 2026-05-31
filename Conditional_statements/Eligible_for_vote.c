#include <stdio.h>

int main()
{
    // Progam to check Eligibility for vote
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("congratulations! You are eligible to vote.");
    }
    else
    {
        printf("you are under age so you can't vote");
    }

    return 0;
}