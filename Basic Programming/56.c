/*
    Write a program to input 2 numbers and display their sum using function.
*/

#include <stdio.h>

int sumnum(int, int);

void main()
{
    int a, b, sum;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    sum = sumnum(a, b);

    printf("sum of %d and %d is %d.", a, b, sum);
}
int sumnum(int a, int b)
{
    int sum;
    sum = a + b;
}