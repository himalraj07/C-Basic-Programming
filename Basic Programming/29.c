/*
    Write a program to input a number from user and display that the number is palidrome or not.
*/

#include <stdio.h>

int main()
{
    int n, sum = 0, r, x;

    printf("Enter a number:");
    scanf("%d", &n);

    x = n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if (sum == x)
        printf("%d is palindrome number.", x);

    else
        printf("%d is non palindrome number.", x);

    return 0;
}