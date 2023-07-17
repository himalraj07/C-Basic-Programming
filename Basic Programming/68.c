/* Write a program to input 5 number in an array and display how many even number are there in function. */

#include<stdio.h>
void checknum(int [],int);
void main()
{
    int i,a[5];
    printf("Enter the 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    checknum(a,5);
}
void checknum(int a[],int fivenum)
{
    int c=0,i;
    for (i=0;i<fivenum;i++)
    {
        if(a[i]%2==0)
        c++;
    }
    printf("There are %d even numbers.\n",c);
}