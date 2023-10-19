#include <stdio.h>
void main()
{
    int n , i , array[100] ,value ;
    printf("Enter no. of elements in array");
    scanf("%d",&n);
    printf("Enter %d elements of sorted array : \n",n);
  for ( i = 0; i < n; i++)
    {scanf("%d",&array[i]);}
    printf("Given Array : ");
  for ( i=0; i < n; i++ )
    {printf("%d ",array[i]);}
     
}    