/* Write a program to input a number and display palindrome or not using function. */

#include<stdio.h>
void palin(int);
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    palin(n);
}
void palin(int n)
{
    int r,rev=0,orginal;
    orginal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(orginal==rev)
    {
        printf("%d is palindrome number.\n",orginal);
    }
    else
    {
        printf("%d is not palindrome number.\n",orginal);
    }
}