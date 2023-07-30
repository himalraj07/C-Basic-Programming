/*
    Newton's forward interpolation Method.
*/

#include <stdio.h>
#define N 15

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    float x[N], y[N][N], X, res = 0, p, h, v;
    int i, j, n;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter term %d x and y value:", i);
        scanf("%f%f", &x[i], &y[i][0]);
    }

    printf("Enter the value of x for which f(x) is to be calculated:");
    scanf("%f", &X);

    h = x[1] - x[0];
    p = (X - x[0]) / h;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
            y[i][j + 1] = y[i][j] - y[i - 1][j];
    }

    for (i = 0; i < n; i++)
    {
        printf("%f\t", x[i]);
        for (j = 0; j < n - 1; j++)
            printf("%f\t", y[i][j]);
        printf("\n");
    }

    res = y[0][0];
    for (i = 1; i < n; i++)
    {
        v = p;
        for (j = 1; j <= i; j++)
        {
            v = v * (p - j);
        }
        res = res + (v * y[0][i] / fact(i));
    }

    printf("Value of f(%f): %f", X, res);

    return 0;
}
