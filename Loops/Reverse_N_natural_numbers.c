#include <stdio.h>

int main() 
{ 
    // program to print reverse N natural numbers
    int i, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    i = N;
    do {
        printf("%d \n",i);
        i--;
    }
    while(i >= 1);
    return 0 ;
}