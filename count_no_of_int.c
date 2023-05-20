#include<stdio.h>

void main(){
    int n, count = 0;
    printf("Enter an integer: \n");
    scanf("%d", &n);
    while (n != 0)
    {
        n /= 10;
        ++count;
    }
    printf("No. of digits: %d", count);
}