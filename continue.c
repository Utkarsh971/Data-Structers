/*WAP to read 15 integers from user and print sum of all positive integers*/

#include<stdio.h>

void main(){
    int n, i, sum = 0;
    for ( i = 0; i < 15; i++)
    {
        printf("Enter the integer: \n");
        scanf("%d", &n);
        if (n<=0)
        {
            continue;
        }

        sum = sum + n;
        
    }

    printf("Sum of positive integers: %d", sum);
    
}