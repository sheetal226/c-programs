#include <stdio.h>

int main()
{ 
    // program to check character is upper case or lower case
    char alphabate;
    printf("Enter alphabate: ");
    scanf(" %c", &alphabate);

    if (alphabate >= 'A' && alphabate <= 'Z')
    {
        printf(" %c is an upper_case", alphabate);
    }
    else if (alphabate >= 'a' && alphabate <= 'z')
    {
        printf(" %c is a lower_case", alphabate);
    }
    else
    {
        printf("it is not an alphabate");
    }

    return 0;
}