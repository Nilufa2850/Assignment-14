/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/

#include<stdio.h>
int main ()
{
        int a [10] ;
        int i , sum = 0 ;

        printf("Enter 10 numbers : ");

        for(i=0 ; i<=9 ; i++)
        {
                scanf("%d",&a[i]);
                sum = sum + a[i];
        } 

        printf("Sum of 10 numbers is %d",sum);
        return 0;
}
