/* Write a program to input a number and display it's factorial by using pointer. */

#include<stdio.h>
int main()
{
    int n,*m,f=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=&n;
    for(i=1;i<=*m;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d.",n,f);
    return 0;
}