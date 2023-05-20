#include<stdio.h>

void main(){
    int first, second, sum, num, counter = 0;
    printf("Enter number of terms: \n");
    scanf("%d", &num);
    printf("Enter the first number: \n");
    scanf("%d", &first);
    printf("Enter the second number: \n");
    scanf("%d", &second);
    printf("Fibbonaci series: %d %d", first, second);
    while (counter < num)
    {
        sum = first + second;
        printf(" %d", sum);
        first = second;
        second = sum;
        counter++;
    }

}