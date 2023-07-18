/*
    Write a program to find sum of two numbers.
*/

#include <stdio.h>

void main()
{
    int a, b, s;
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    s = a + b;
    printf("sum of %d and %d is %d.", a, b, s);

    return 0;
}