#include <stdio.h>

int main()
{
    // program to check validity of triangle
    // through agle

    int angle_1, angle_2, angle_3;

    printf("Enter angle1: ");
    scanf("%d", &angle_1);
    printf("Enter angle2: ");
    scanf("%d", &angle_2);
    printf("Enter angle3: ");
    scanf("%d", &angle_3);

    int sum = angle_1 + angle_2 + angle_3;

    if (sum == 180 && angle_1 > 0 && angle_2 > 0 && angle_3 > 0)
    {
        printf("Triangle is valid: %d\n", sum);
    }
    else
    {
        printf("Triangle is invalid: %d \n", sum);
    }

    // through side

    int side_a, side_b, side_c;
    printf("side a: ");
    scanf("%d", &side_a);
    printf("side b: ");
    scanf("%d", &side_b);
    printf("side c: ");
    scanf("%d", &side_c);

    sum = side_a + side_b + side_c;
    if (side_a + side_b > side_c && side_b + side_c > side_a && side_a + side_c > side_b)
    {
        printf("Triangle is valid ");
    }
    else
    {
        printf("triangle is invalid ");
    }
    return 0;
}