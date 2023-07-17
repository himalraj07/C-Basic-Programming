// Write a program to input 20 number from user and display their sum. //
#include <stdio.h>
int main()
{
    int a[20],sum=0,i;
    for(i=0;i<20;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of twenty number is %d.",sum);
    return 0;
}