#include<stdio.h>

void main(){
    int n;
    do
    {
        printf("Enter a number \n");
        scanf("%d", &n);
    } while (n<=0);
    printf("n value: %d", n);
    
}