/*
    Simpson's 1/3 Rule.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x)
{
    return (1 / x);
}

void main()
{
    float a, b, h, s = 0, s1;
    int i, n;

    printf("\nEnter number of interval : ");
    scanf("%d", &n);

    printf("Enter lower limit : ");
    scanf("%f", &a);

    printf("Enter upper limit : ");
    scanf("f", &b);

    h = (b - a) / n;
    s = f(a) + f(b);

    printf("\n%3f\t%3f", a, f(a));

    for (i = 1; i < n; i++)
        ;
    {
        if (i % 2 == 0)
            s = s + 2 * f(a + i * h);
        else
            s = s + 4 * f(a + i * h);

        printf("\n%3f\t%3f", a + i * h, f(a + i * h));
    }

    printf("\n%3f\t%3f", b, f(b));

    s1 = (h / 3) * s;

    printf("\n%f", s1);
}