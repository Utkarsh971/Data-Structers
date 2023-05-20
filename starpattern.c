#include<stdio.h>

void main(){
    int i, j, k, numofrows;
    printf("Enter number of rows: \n");
    scanf("%d", &numofrows);
    for ( i = 1; i <= numofrows; i++)
    {
        for ( j = i; j < numofrows; j++)
        {
            printf(" ");
        }
            for ( k = 1; k < (i * 2); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}