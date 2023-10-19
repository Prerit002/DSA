#include <stdio.h>
void main()
{
    int n , i , array[100] , pos , num ;
    printf("Enter no.of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements in array : \n",n);
  for ( i = 0; i < n; i++)
    {scanf("%d",&array[i]);}
    printf("Given Array : ");
  for ( i=0; i < n; i++ )
    {printf("%d ",array[i]);}
    printf("\nEnter position for deletion :");
    scanf("%d",&pos);
   if(pos<=0||pos>n)  
    { printf("invalid position"); }
   else 
    {   num = array[pos-1];
     for ( i = pos-1; i < n-1; i++)
       {array[i] = array[i+1];}
    n--; 
    printf("deleted no is %d\n",num); 
    printf("Resultant array is \n");
    for (i=0 ; i <= n-1; i++)
      printf("%d\n",array[i]);
    }
}