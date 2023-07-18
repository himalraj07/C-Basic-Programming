/*
    Write a program to input 7 numbers in an array and ask a user a number to find in that array.if found display its location in array other wise display not found.
*/

#include <stdio.h>

int main()
{
    int i, a[7], n;

    for (i = 0; i < 7; i++)
    {
        printf("Enter number : ");
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be find : ");

    scanf("%d", &n);
    {
        for (i = 0; i < 7; i++)

            if (a[i] == n)
            {
                printf("location of %d is %d.", n, i + 1);
                return 0;
                break;
            }

        printf("not found");
    }
}