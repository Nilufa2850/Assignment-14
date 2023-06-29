/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include<stdio.h>
int main ()
{
        int ary[10] ;
        int i , sum =0 ; 
        float avg ;
        printf("Enter 10 numbers :  ");

        for(i=0 ; i<=9 ; i++)
        {
                scanf("%d", &ary[i] ) ;

                sum = sum + ary[i] ;
        }

        avg = sum / 10.0 ;
        printf("Average is %.2f", avg) ;
        return 0;
}
