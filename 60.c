// Write a program to input a number and display it is even or odd using function. //

#include<stdio.h>
void checknum(int);
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    checknum(a);
}
void checknum(int a)
{
    if(a%2==0)
    {
        printf("Even number.");
    }
    else
    {
        printf("Odd number.");
    }
}