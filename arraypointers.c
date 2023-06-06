#include<stdio.h>

void main(){

    char c[] = "GATE2020";
    char *p = c;
    printf("%s", p+p[3]-p[1]);
}