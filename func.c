#include<stdio.h>

int max(int x, int y){
    (x>y)?printf("Maximum is %d", x):printf("Maximum is %d", y);
    return 0;
}

void main(void){
    int a = 100, b = 200;
    max(a, b);
}