#include <stdio.h>
void main()
{
    int n , i , array[100] ,value ;
    printf("Enter no. of elements in array");
    scanf("%d",&n);
    printf("Enter %d elements in array : \n",n);
  for ( i = 0; i < n; i++)
    {scanf("%d",&array[i]);}
    printf("Given Array : ");
  for ( i=0; i < n; i++ )
    {printf("%d ",array[i]);}
    printf("\nEnter element which U want to find: ");
    scanf("%d",&value);
  for ( i = 0; i < n; i++)
  { if (i==value)
    {printf("At index %d,your %d is found.",i, value);}
  }
}