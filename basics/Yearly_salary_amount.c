#include <stdio.h>
int main() {
    // calculating yearly salary amount
    float monthly_salary, yearly_salary;
    printf("Enter monthly salary : ");
    scanf("%f",&monthly_salary);

    yearly_salary = 12*monthly_salary;
    printf("yearly_salary : %.2f",yearly_salary);
    return 0;
}