/* Write a program to input 5 number in array and display sum of array using function. */

#include<stdio.h>
void sumarray(int [],int);
void main()
{
    int a[5],i;
    printf("Enter the 5 numbers:");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sumarray(a,5);
}
void sumarray(int a[],int fivenum)
{
    int i,sum=0;
    for (i=0;i<fivenum;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of numbers is %d.\n",sum);
}