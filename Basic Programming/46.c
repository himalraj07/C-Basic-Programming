/*
    Write a program to display following pattern.
	1
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
}