#include<stdio.h>
void fabonacci(int n)
{
    int i , array[n];
    array[0] =0;
    array[1] =1;
    for ( i = 2; i < n; i++)
    {
        array[i] = array[i-1] + array[i-2];
    }

    for ( i = 0; i < n; i++)
    {
        printf(" %d ", array[i] );
    }

}

void main()
{   
    int n;
    printf("Enter no. upto which you want your fabonacci series : ");
    scanf("%d",&n);
    fabonacci(n);
}