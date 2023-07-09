/* Write a program to input name and age of 2 student in structure and display them using function. */

#include<stdio.h>
struct record
{
    int age;
    char name[20];
}rec[2];
void display(struct record [],int);
void main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter your name:");
        scanf("%s",rec[i].name);
        printf("Enter your age:");
        scanf("%d",&rec[i].age);
    }
    display(rec,10);
}
void display(struct record rec[],int size)
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nName => %s\n",rec[i].name);
        printf("Age => %d\n",rec[i].age);
    }
}