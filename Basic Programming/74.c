/* Write a program to input two numbers and display sum of numbers using structure. */

#include<stdio.h>
#include<conio.h>
struct Record
{
    int a,b,s;
};
void main ()
{
    struct Record rec;
    printf ("Enter first number:");
    scanf ("%d",&rec.a);
    printf ("Enter second number:");
    scanf ("%d",&rec.b);
    rec.s=rec.a+rec.b;
    printf ("Sum of two numbers is %d.",rec.s);
    getch ();
}