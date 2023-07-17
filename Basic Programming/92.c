/* Write a program to input two numbers and display their sum by using pointer. */

#include<stdio.h>
int main()
{
    int a,b,s,*x,*y;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    x = &a;
    y = &b;
    s = *x + *y;
    printf("sum of %d and %d is %d.",a,b,s);
    return 0;
}