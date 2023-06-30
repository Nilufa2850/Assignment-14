/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/

#include<stdio.h>
int main()
{
        int i , n ; 
        printf("Enter arrya size : ");
        scanf("%d",&n);

        int a[n] , b[n] ;

        printf("\nEnter %d values of a[] : ",n);
        for(i=0 ; i<=n-1 ; i++)
                scanf("%d",&a[i]);
                
                
        printf("\nValues of a[] are : ");
        for(i=0 ; i<n ; i++)
                printf("%d ",a[i]);
        

        printf("\nvalues of b[] are : ");
        for(i=0 ; i<n ; i++)
        {
                b[i] = a[i] ;
                printf("%d ",b[i]);
        }

        return 0;

}
