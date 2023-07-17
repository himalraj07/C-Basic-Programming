// Write a program to input three number and display largest number using function. //

#include<stdio.h>
void checknum(int,int,int);
void main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    checknum(a,b,c);
}
void checknum(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("%d is greatest number.",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is greatest number.",b);
    }
    else
    {
        printf("%d is greatest number.",c);
    }
}