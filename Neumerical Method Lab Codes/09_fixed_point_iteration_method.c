/*
    Fixed point iteration Method.
*/

#include <stdio.h>
#include <math.h> 

float f(float x)
{
    return (pow(x, 3) - 9 * pow(x, 2) - 10);
}

float g(float x)
{
    float r = 9 * x * x + 10;
    float s = (float)1 / 3;
    return pow(r, s);
}

int main() 
{
    int i = 0;
    float x0, x1;

    printf("\nEnter initial approximation:");
    scanf("%f", &x0);

    printf("\nIteration\tx0\t\tx1"); 

    do
    {
        i++;
        x1 = g(x0);
        printf("\n%d\t\t%f\t\t%f", i, x0, x1);
        x0 = x1;
    } while (fabs(f(x1)) > 0.001);

    printf("\nRoot of equation is: %f", x1);
    
    return 0; 
}
