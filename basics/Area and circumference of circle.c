#include <stdio.h>
int main()
{
    int pi = 3.14;
    float radius, area, circumference;

    printf("Enter the radius");
    scanf("%f", &radius);

    // to calculate area and circumference of circle;

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("circumference of circle : %.2f\n", circumference);
    printf("area of circle : %.2f\n", area);

    return 0;
}