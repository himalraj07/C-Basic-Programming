// Write a program to input age of a person and display he/she elisible for vote or not using function. //

#include<stdio.h>
void voteage(int);
void main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    voteage(age);
}
void voteage(int age)
{
    if(age>=18)
    {
        printf("you can vote.");
    }
    else
    {
        printf("you can't vote.");
    }
}