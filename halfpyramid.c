#include<stdio.h>

void main(){
    int i, j, numofrows;
    printf("Enter number of rows \n");
    scanf("%d", &numofrows);
    for ( i = 0; i < numofrows; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}