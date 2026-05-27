#include <stdio.h>
int main() {
    // convert celsius to fehrenhiet
float celsius, fehrenhiet;
printf("Enter the celsius : ");
scanf("%f",&celsius);

fehrenhiet = 9/5 * celsius + 32;
printf("value of celsius in fehrenhiet  = %.2f \n",fehrenhiet);

return 0;
}