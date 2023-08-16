/*
    Write a program to input 6 number and in an array. split the element into two array one which consist of even numbers and one consist of odd number.
*/

#include <stdio.h>

void main()
{
    int a[6], i;

    for (i = 0; i < 6; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
    }

    printf("The even number is : ");

    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\n");
    printf("The odd number is : ");

    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 1)
            printf("%d ", a[i]);
    }
}