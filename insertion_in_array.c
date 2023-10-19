#include<stdio.h>
    void main()
    {
        int n , i , array[100] , pos , value;

            printf("Enter no of elements in array:");
            scanf("%d",&n);
            printf("Enter %d elements \n",n);
        for(i = 0;i<n; i++)    
            {scanf("%d",&array[i]);}
            printf("Enter position for insertion :");
            scanf("%d",&pos);
            printf("Enter the value to insert :");
            scanf("%d",&value);

          if(pos<=0||pos>n)  
        { printf("invalid position"); }
          else
        {for (i=n-1; i>=pos-1; i--)
            {array[i+1] = array[i];}

        array[pos-1] = value;

        printf("Resultant array is \n");

        for (i=0 ; i <= n; i++)
            printf("%d\n",array[i]);
        }    
    }