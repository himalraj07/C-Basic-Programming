/* Write a program to input length and breadth of rectangle and display it's area using structure. */

#include<stdio.h>
#include<conio.h>
struct Record
{
    int l,b,a;
};
void main ()
{
    struct Record rec;
    printf ("Enter length:");
    scanf ("%d",&rec.l);
    printf ("Enter breadth:");
    scanf ("%d",&rec.b);
    rec.a=rec.l*rec.b;
    printf ("Area of the rectangle is %d.",rec.a);
    getch ();
}