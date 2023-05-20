#include<math.h>
#include<stdio.h>

void main(){
    int number, originalnumber, remainder, result = 0, n = 0;
    printf("Enter an integer: \n");
    scanf("%d", &number);
    originalnumber = number;
    while (originalnumber != 0)
    {
        originalnumber /= 10;
        ++n;
    }
    originalnumber = number;
    while (originalnumber != 0)
    {
        remainder = originalnumber % 10;
        result += pow(remainder, n);
        originalnumber /= 10;
    }
    (result == number)?printf("Armstrong Number"):printf("Not Armstrong Number");
    
}