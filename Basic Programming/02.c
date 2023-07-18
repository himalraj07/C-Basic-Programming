/*
    Write a program to calculate area of rectangle.
*/

#include <stdio.h>

void main()
{
    int l, b, a;
    printf("Enter the length:");
    scanf("%d", &l);

    printf("Enter the breadth:");
    scanf("%d", &b);

    a = l * b;
    printf("Area of rectangle is %d.", a);
}