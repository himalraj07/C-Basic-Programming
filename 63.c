/*
    Write a program to input a number and display it is prime number or composite number using function.
*/
#include <stdio.h>
#include <conio.h>
void checkprime (int);
void main()
{
    int n;
    printf ("Enter a number:");
    scanf ("%d",&n);
    checkprime (n);
    getch ();
}
void checkprime (int n)
{
    int i,c=0;
    for (i=2;i<n;i++);
    {
        if (n%2==0)
        {
            c=c+i;
        }
    }
    if (c==0)
    {
        printf ("%d is a Prime number.",n);
    }
    else
    {
        printf ("%d is a Composite number.",n);
    }
}