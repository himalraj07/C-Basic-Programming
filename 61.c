// Write a program to input two number and display smallest number using function. //

#include<stdio.h>
void checknum(int,int);
void main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    checknum(a,b);
}
void checknum(int a,int b)
{
    if(a<b)
    {
        printf("%d is smaller then %d.",a,b);
    }
    else
    {
        printf("%d is smaller than %d.",b,a);
    }
}