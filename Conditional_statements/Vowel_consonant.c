#include <stdio.h>

int main()
{
    // Program to check whether an alphabet is a vowel or a consonant
    
    char ch;
    printf("Enter alphabate: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Alphabate is vowel ");
    }
    else
    {
        printf("alphabate is consonant");
    }

    return 0;
}