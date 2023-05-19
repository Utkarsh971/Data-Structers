/*WAP to read integers until user enters a neg integer or numner of integer reaches to 15*/

#include<stdio.h>

void main(){
    int n, i;
    for ( i = 0; i < 15; i++)
    {
        printf("Enter integer: \n");
        scanf("%d", &n);
        if (n<0)
        {
            break;
        }
        
    }
    
}