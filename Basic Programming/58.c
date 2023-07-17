// Write a program to input p,t,r and calculate simple interest using function. //

#include<stdio.h>
int SIsecond (int,int,int);
void main()
{
    int p,t,r,SI;
    printf ("Enter Principal:");
    scanf ("%d",&p);
    printf ("Enter time period:");
    scanf ("%d",&t);
    printf ("Enter rate of interest:");
    scanf ("%d",&r);
    SI= SIsecond (p,t,r);
    printf("Simple interest is %d.",SI);
    return 0;
}
int SIsecond (int p,int t,int r)
{
    int SI;
    SI= p*t*r/100;
    return SI;
}