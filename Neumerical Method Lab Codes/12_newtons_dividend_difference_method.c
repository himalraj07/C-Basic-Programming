/*
    Newton's dividend difference method.
*/

#include <stdio.h>
#include <math.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

void main()
{
    float x[10], y[10][10], X, temp, sum = 0;
    int i, n, j, k = 0, f, m;
    printf("\nHow many records will you enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of x%d and y%d:", i, i);
        scanf("%f", &x[i]);
    }
    for (i = 1; i < n; i++)
    {
        k = i;
        for (j = 0; j < n - 1; j++)
        {
            y[i][j] = (y[i - 1][j + 1] - y[i - 1][j]) / (x[k] - x[j]);
            k++;
        }
    }
    printf("\nx(i)\t y(i)\t y1(i) y2(i) y3(i) y4(i)\n");
    for (i = 0; i < n; i++)
    {
        printf("%3f", x[i]);
        for (j = 0; j < n - i; j++)
        {
            printf("\n");
            printf("%3f", y[i][j]);
        }
        printf("\n");
    }
    i = 0;
    do
    {
        if (x[i] < X && X < x[i + 1])
            k = 1;
        else
            i++;
    } while (k != 1);
    f = i;
    sum = 0;
    for (i = 0; i < n - 1; i++)
    {
        k = f;
        temp = 1;
        for (j = 0; j < i; j++)
        {
            temp = temp * (X - x[k]);
            k++;
        }
        sum = sum + temp * (y[i][f]);
    }
    printf("\nf(%2f) = %f", X, sum);
}
