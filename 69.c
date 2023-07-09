/* Write a program to input a number and display its fractorial using recursive function. */

#include<stdio.h>
int fac(int);
void main()
{
    int n,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    f=fac(n);
    printf("Fractorial of %d is %d.\n",n,f);
}
int fac(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return fac(n-1)*n;
    }
}