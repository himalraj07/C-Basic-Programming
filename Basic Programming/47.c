/*
    Write a program to input 10 number and display in ascending order.
*/

#include <stdio.h>

int main()
{
    int i, j, a[10], temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n");
    printf("Ascending order is : ");

    for (i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}