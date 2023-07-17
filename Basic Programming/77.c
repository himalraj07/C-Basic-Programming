/* Write a program to input ID,name,age and address of 2 student and play it using structure. */

#include<stdio.h>
#include<conio.h>
struct record
{
    int age,id;
    char name[15],address[20];
}rec[2];
void main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter your ID: ");
        scanf("%d",&rec[i].id);
        printf("Enter your Name: ");
        scanf("%s",rec[i].name);
        printf("Enter your Age: ");
        scanf("%d",&rec[i].age);
        printf("Enter your Address: ");
        scanf("%s",rec[i].address);
        printf(".................................\n");
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
    printf("ID => %d\n",rec[i].id);
    printf("Name => %s\n",rec[i].name);
    printf("Age => %d\n",rec[i].age);
    printf("Address => %s\n",rec[i].address);
    printf("\n");
    }
}