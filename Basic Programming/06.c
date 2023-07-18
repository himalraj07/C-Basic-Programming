/*
    Write a program to input a number and display it is exactly divisible by 5 and not by 11.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 != 0)
    {
        printf("%d is divisible by 5 not by 11.", number);
    }

    else
    {
        printf("Condition is unsatisfied.");
    }

    return 0;
}