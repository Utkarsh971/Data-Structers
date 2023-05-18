#include<stdio.h>
void main(){
    char operator;
    double a,b;
    printf("Enter an operator (+,-,*,/):");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf", &a, &b);
    switch (operator)
    {
    case '+':
        printf("Addition of a & b: %lf", a+b);
        break;
    
    case '-':
        printf("Subtraction of a & b: %lf", a-b);
        break;

    case '*':
        printf("Multiplication of a & b: %lf", a*b);
        break;

    case '/':
        printf("Division of a & b: %lf", a/b);
        break;

    default:
        printf("Enter a valid operator");
        break;
    }
}