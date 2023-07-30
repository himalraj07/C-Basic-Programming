/*
    Gauss-jordan Method.
*/

#include <stdio.h>

void main()
{
    float m[3][4] = {2, 8, 2, 14, 1, 6, -1, 13, 2, -1, 2, 5}, t;
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        // Make the diagonal element 1
        t = m[i][i];
        for (j = 0; j < 4; j++)
        {
            m[i][j] /= t;
        }

        // Make the elements of the other rows in the same column zero
        for (j = 0; j < 3; j++)
        {
            if (i != j)
            {
                t = m[j][i];
                for (k = 0; k < 4; k++)
                {
                    m[j][k] -= t * m[i][k];
                }
            }
        }
    }

    printf("Matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%f\t", m[i][j]);
        }
        printf("\n");
    }

    printf("Solutions are :\n");
    for (i = 0; i < 3; i++)
    {
        printf("%f\n", m[i][3]);
    }
}