#include<stdio.h>
void main()
{
    int n, i ,array[100] ;
    printf("enter no of elements");
    scanf("%D",&n);
    printf("enter %d elements : \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Resultant array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",array[i]);
    }
    
    
}