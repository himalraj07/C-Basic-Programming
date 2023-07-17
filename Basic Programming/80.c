/* Write a program to input name,age,salary of a person and display it using union. */

#include<stdio.h>
union record
{
    char name[20];
    int age,salary;
}rec;
void main()
{
    printf("Enter your name:");
    scanf("%s",rec.name);
    printf("=> Your name is %s.\n",rec.name);
    printf("Enter your age:");
    scanf("%d",&rec.age);
    printf("=> You are %d years old.\n",rec.age);
    printf("Enter your salary:$");
    scanf("%d",&rec.salary);
    printf("=> Your salary is $%d.\n",rec.salary);
}