#include<stdio.h>

void main(){
    int n, i, sum = 0;
    printf("Enter value of n: \n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of natural numbers: %d", sum);
    
}