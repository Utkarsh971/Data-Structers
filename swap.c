#include<stdio.h>

void swap(int *, int *);
void main(){
    int x,y;
    printf("Enter two variables \n");
    scanf("%d %d", &x, &y);
    swap(&x,&y);
    printf("After swapping \n x = %d \n y = %d \n", x, y);

}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}