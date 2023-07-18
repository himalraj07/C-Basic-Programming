/*
    Write a program to input 5 numbers in array and display its reverse.
*/

#include <stdio.h>

void main()
{
    int a[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number:");
        scanf("%d", &a[i]);
    }

    printf("Reverse of numbers is : ");

    for (i = 4; i >= 0; i--)
        printf("%d  ", a[i]);
}