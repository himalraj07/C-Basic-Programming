/*
    Write a program to input 7 number and display largest and smallest number.
*/

#include <stdio.h>

void main()
{
    int i, a[7], l, s;

    for (i = 0; i < 7; i++)
    {
        printf("Enter a number:");
        scanf("%d", &a[i]);
    }

    l = s = a[0];

    for (i = 0; i < 7; i++)
    {
        if (a[i] > l)
            l = a[i];

        else
            s = a[i];
    }

    printf("Largest number = %d.\n", l);
    printf("Smallest number = %d.", s);

    return 0;
}