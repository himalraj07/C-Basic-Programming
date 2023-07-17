/* Write a program to display it for 20 times. */

#include<stdio.h>
int main()
{
    int n, i;
    printf("Please enter the number:");
    scanf("%d",&n);
    for (i=1;i<=20;i=i+1)
    {
        printf("%d,",n);
    }
    return 0;
}