#include <stdio.h>

int main() 
{ 
    // program to print sum of first N natural numbers
    int i, N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int sum = 0;
    for(i = 1; i <= N; i++) {
        printf("%d \n",i);
        
    sum = sum + i ;
}
    printf("sum of N numbers are: %d", sum);
    return 0 ;
}