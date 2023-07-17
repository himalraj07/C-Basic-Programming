// Write a program to input 5 number and how many time 5 is appeared. //

#include<stdio.h>
int main()
{
    int a[5],i,c=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    if(a[i]==5)
    c++;
    printf("Five is appeored %d times.",c);
    return 0;;
}