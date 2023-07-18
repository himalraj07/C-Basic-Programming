/*
    Write a program to input principal,rate,time and display simple interest.
*/

#include <stdio.h>

void main()
{
    int p, t, r, s;
    printf("Enter the principle:");
    scanf("%d", &p);

    printf("Enter the rate:");
    scanf("%d", &r);

    printf("Enter the time:");
    scanf("%d", &t);

    int SI = p * t * r / 100;
    printf("Simple interst is %d.", SI);
}