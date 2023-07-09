/* Write a program to input age of a person and display that the person eligible for vote or not. */

#include <stdio.h>
void main()
{
    int age;
    printf("\n");
    printf("Please enter the age:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else
    {
        printf("you can not vote");
    }
}