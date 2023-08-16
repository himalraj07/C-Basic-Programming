/*
    Write a program to display following series using while loop.
    1,3,5,7,........,100.
*/

#include <stdio.h>

int main()
{
    int i;
    i = 1;

    while (i <= 100)
    {
        printf("%d\t", i);
        i = i + 2;
    }

    return 0;
}