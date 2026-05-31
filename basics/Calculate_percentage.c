#include <stdio.h>

int main()
{
    // Prograam to calculate percentage
    
    float Obtained, Total, Percentage;
    printf("Enter obtained marks: ");
    scanf("%f", &Obtained);
    printf("Enter total marks: ");
    scanf("%f", &Total);

    Percentage = (Obtained / Total) * 100;
    printf("Percentage = %.2f",Percentage);

    return 0;
}