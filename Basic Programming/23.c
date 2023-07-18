/*
    Write a program to display following series using while loop.
    2,4,6,8,...........,100.
*/

#include <stdio.h>

int main()
{
    int i;
    i = 2;

    while (i <= 100)
    {
        printf("%d\t", i);
        i = i + 2;
    }

    return 0;
}