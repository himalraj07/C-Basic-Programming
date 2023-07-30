/*
    Gauss Seidel Method.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float fx(float y, float z);
float fy(float x, float z);
float fz(float x, float y);

int main()
{
    float x = 0, y = 0, z = 0, xn, yn, zn;
    int i, n;
    printf("Enter number of iterations: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        xn = fx(y, z);
        yn = fy(x, z);
        zn = fz(x, y);

        x = xn;
        y = yn;
        z = zn;
    }

    printf("\nx = %f\ny = %f\nz = %f", x, y, z);
    getch();
    return 0;
}

float fx(float y, float z)
{
    return ((17 - y + 2 * z) / 20);
}

float fy(float x, float z)
{
    return ((-18 - 3 * x + 2) / 20);
}

float fz(float x, float y)
{
    return ((25 - 2 * x + 3 * y) / 20);
}
