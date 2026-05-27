#include <stdio.h>
int main() {
    // calculate Simple Interest
int principal , rate , time;
printf("Enter the value of principal : ");
scanf("%d",&principal);
printf("Enter the rate of interest : ");
scanf("%d",&rate);
printf("Enter the time in years : ");
scanf("%d",&time);

int simple_interest = (principal*rate*time)/100;
printf("simple interest is : %d",simple_interest);
return 0;
}