/* Write a program to input a number and display reverse number of digits using function. */

#include<stdio.h>
void reversenum(int);
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    reversenum(n);
}
void reversenum(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse of number is %d.\n",rev);
}