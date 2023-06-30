/*Write a program to sort elements of an array of size 10. Take array values from the
user.*/

#include<stdio.h>
int main()
{
        int a[10] ; 
        int i , j , sv ;
        printf("Enter 10 numbers : ");

        for(i=0 ; i<=9 ; i++)
                scanf( "%d",&a[i] ) ;

        for(i=0 ; i<=8 ; i++)
        {
                for(j=1+i ; j<=9 ; j++)
                {
                        if ( a[i] > a[j] )
                        {
                                sv = a[i] ;
                                a[i] = a[j] ;
                                a[j] = sv ; 
                        }       
                } 
        }

        for(i=0 ;i<=9 ; i++)
                printf(" %d ",a[i]);

        return 0 ;
          
}
