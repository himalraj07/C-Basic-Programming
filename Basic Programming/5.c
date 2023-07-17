/* Write a program to input a number and display it is exactly divisible by 6 or not. */

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%6==0)
    {
        printf("%d is divisible by 6.",number);
    }
    else
    {
        printf("%d is not divisible by 6.",number);
    }
    return 0;
}