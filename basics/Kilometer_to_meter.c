#include <stdio.h>
int main()
{
    int kilometer, meter;
    printf("kilometer : ");
    scanf("%d", &kilometer);
    // convert kilometer to meter
    meter = 1000 * kilometer;
    printf("kilometer : %d meter\n", meter);
    return 0;
}