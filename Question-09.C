/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/

#include<stdio.h>
int main ()
{
        int i , n ;
        
        printf("Enter Size of this array :");
        scanf("%d",&n);

        int ary[n];

        printf("\nEnter %d values : ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&ary[i]);

        printf("\nReverse order : ");
        for(i=n-1 ; i>=0 ; i--)
                printf("%d ",ary[i]);

        return 0;

}
