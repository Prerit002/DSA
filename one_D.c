#include<stdio.h>
void main()
{
    int i ,b, arr[5] ;
    for (i=0; i<5; i++)
    {
         printf("Enter your %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
     printf("Your given array:");
      for (i=0; i<5; i++)
    {
         printf(" %d ", arr[i]);
    }
    printf("\nEnter your desired no to be searched : ");
    scanf("%d",&b);
    for (i=0 ; i<5 ; i++)
    {
        if (b==arr[i]) 
            printf("\nContgrats your no. : %d is found." , b );
        else if (b!=arr[i])
        {
             printf("\nSorry Your no. : %d is not found." , b );
        }
        break;

        
    }
    
 }
