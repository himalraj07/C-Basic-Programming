/*
    Write a program to input a number and display its cube.
*/

#include <stdio.h>

void main()
{
    int a, c;
    printf("Enter a number:");
    scanf("%d", &a);

    c = a * a * a;

    printf("Cube of %d is %d.", a, c);
}