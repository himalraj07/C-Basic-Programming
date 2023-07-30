/*
    Newton's divided difference method.
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

int main()
{
    float x[10], y[10][10], X, temp, sum = 0;
    int i, n, j, k = 0, f;
    
    printf("\nHow many data points will you enter : ");
    scanf("%d", &n);
    printf("\n");

    // Input phase
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of x%d : ", i);
        scanf("%f", &x[i]);
        printf("Enter the value of y%d : ", i);
        scanf("%f", &y[i][0]); // Assuming y(i) is entered directly, no need to input y(i) multiple times.
    }

    // Calculation phase
    for (i = 1; i < n; i++)
    {
        k = i;
        for (j = 0; j < n - i; j++)
        {
            y[i][j+1] = (y[i - 1][j + 1] - y[i - 1][j]) / (x[k] - x[j]);
            k++;
        }
    }

    printf("\nTable of divided differences :\n");
    printf("x(i)\t\t y(i)\t\ty1(i) y2(i)\ty3(i) y4(i)\n");
    for (i = 0; i < n; i++)
    {
        printf("%f", x[i]);
        for (j = 0; j < n - i; j++)
        {
            printf("\t%f", y[i][j]);
        }
        printf("\n");
    }

    // Find the value of X
    printf("\nEnter the value of X for interpolation : ");
    scanf("%f", &X);

    // Interpolation phase
    for (i = 0; i < n - 1; i++)
    {
        k = f = 0; // initialize k and f to 0 in each iteration
        temp = 1;
        while (k != 1)
        {
            if (x[i] < X && X < x[i + 1])
                k = 1;
            else
                i++;
        }
        f = i;
        for (j = 0; j < i; j++)
        {
            temp = temp * (X - x[k]);
            k++;
        }
        sum = sum + temp * (y[i][f]);
    }

    printf("\nf(%f) = %f\n\n", X, sum);

    return 0;
}
