/*
    Jacobi Method
*/

#include <stdio.h>
#include <math.h>

float fx(float y, float z);
float fy(float x, float z);
float fz(float x, float y);

int main()
{
    float x = 0, y = 0, z = 0, xn, yn, zn;
    int n, i;

    printf("Enter number of iterations: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        xn = fx(y, z);
        yn = fy(x, z);
        zn = fz(x, y);
        
        // Here, we use the updated values in the next iteration
        x = xn;
        y = yn;
        z = zn;
        
        // Print intermediate results (optional)
        printf("Iteration %d: x = %f, y = %f, z = %f\n", i, x, y, z);
    }

    printf("\nFinal result: x = %f, y = %f, z = %f\n", x, y, z);
    return 0;
}

float fx(float y, float z)
{
    return ((17 - y + 2 * z) / 20);
}

float fy(float x, float z)
{
    return ((-18 - 3 * x + 2 * z) / 20);
}

float fz(float x, float y)
{
    return ((25 - 2 * x + 3 * y) / 20);
}
