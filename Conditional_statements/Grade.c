#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    // check input validity
    if (percentage < 0 || percentage > 100)
    {
        printf("invalid percentage, Enter percentage between 0-100");
        return 0;
    }

    char grade;
    // calculate grade
    {
        if (percentage >= 90)
            grade = 'A';

        else if (percentage >= 80)
            grade = 'B';

        else if (percentage >= 70)
            grade = 'C';

        else if (percentage >= 60)
            grade = 'D';

        else if (percentage >= 50)
            grade = 'E';

        else
            grade = 'F';

        printf("your garde is: %c \n", grade);
    }

    return 0;
}