/*
    Write a program to input 3*3 matrix and display sum of all even elements.
*/

#include <stdio.h>

int main()
{
    int i, j, a[3][3], sum = 0;

    printf("Enter the matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0)
                sum = sum + a[i][j];
        }
    }

    printf("Sum of even numbers in the matrix is %d.", sum);

    return 0;
}