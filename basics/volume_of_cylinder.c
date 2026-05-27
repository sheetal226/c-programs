#include <stdio.h>
int main() {
// Area of circle
float pi ,radius ;
pi = 3.14;
printf("Enter the value of radius : ");
scanf("%f",&radius);

float area = pi*radius*radius;
printf("Area of circle = %.2f \n",area);

// Now volume of cylinder by using area of circle
float height;
printf("Enter the value of height : ");
scanf("%f",&height);

float volume = area*height;
printf("Volume of cylinder = %.2f \n",volume);

return 0;
}