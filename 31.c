// Write a program to display first n prime numbers. //

#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Please enter number limit:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
        {
            break;
        }
        }
        if(i==j)
        {
            printf("%d,",i);
        }
    }
}