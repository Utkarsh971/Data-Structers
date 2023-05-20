#include<stdio.h>

void main(){
    int n, reversednum = 0, remainder, originalnum;
    printf("Enter a number: \n");
    scanf("%d", &n);
    originalnum = n;
    while (n != 0)
    {
        remainder = n% 10;
        reversednum = reversednum * 10 + remainder;
        n /= 10;
    }
    
    (originalnum == reversednum)?printf("Palindrome"):printf("Not Palindrome");
}