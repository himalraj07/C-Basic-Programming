/* Write a program to display sum of first 100 natural number using recursive function. */

#include<stdio.h>
int sum(int);
void main()
{
    int n,s=0;
    printf("How many natural noumber do you want to add => ");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum of %d natural numbers is %d.\n",n,s);
}
int sum(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return sum(n-1)+n;
    }
}