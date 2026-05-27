#include <stdio.h>
int main() {
// Area of rectangle

int length,breadth;
printf("Enter value of length : ");
scanf("%d",&length);
printf("Enter value of breadth : ");
scanf("%d",&breadth);

int area = length * breadth;
printf("Area of rectangle = %d",area);

return 0;
}