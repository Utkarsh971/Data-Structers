#include<stdio.h>
int main(){

    int intSize;
    float floatSize;
    char charSize;
    double doubleSize;
    long longSize;
    short shortSize;
    

    printf("%zu\n", sizeof(intSize));
    printf("%zu\n", sizeof(floatSize));
    printf("%zu\n", sizeof(charSize));
    printf("%zu\n", sizeof(doubleSize));
    printf("%zu\n", sizeof(longSize));
    printf("%zu\n", sizeof(shortSize));
    

    return 0;

}