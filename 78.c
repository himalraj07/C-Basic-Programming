/* Write a program to input name and age of a student in structure and play them using function. */

#include<stdio.h>
struct record
{
    int age;
    char name[20];
}rec;
void play(struct record);
void main()
{
    printf("Enter your name: ");
    scanf("%s",rec.name);
    printf("Enter your age: ");
    scanf("%d",&rec.age);
    play(rec);
}
void play(struct record rec)
{
    printf("\nName => %s\n",rec.name);
    printf("Age => %d\n",rec.age);
}