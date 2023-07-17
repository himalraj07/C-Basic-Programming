/* Write a program to input age of a person and display he/she is eligible for vote or not. */

#include<stdio.h>
#include<string.h>
int main()
{
    int age,n;
    char eligibility[20];
    printf("Please enter your age:");
    scanf("%d",&age);
    n=18-age;
    if(age>=18)
    {
        strcpy(eligibility,"You are eligible for vote.");
    }
    else
    {
        strcpy(eligibility,"You are not eligible for vote.");
    }
    printf("%s",eligibility);
    return 0;
}