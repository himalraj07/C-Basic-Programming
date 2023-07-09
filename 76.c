/* Write a program to input ID,name,age and address of a student and display it using structure. */

#include<stdio.h>
#include<conio.h>
struct Record
{
    int id;
    char name[20];
    int age;
    char address[20];
};
void main ()
{
    struct Record rec;
    printf ("Enter ID:");
    scanf ("%d",&rec.id);
    printf ("Enter name:");
    scanf ("%s",rec.name);
    printf ("Enter age:");
    scanf ("%d",&rec.age);
    printf ("Enter address:");
    scanf ("%s",rec.address);

    printf ("\n");
    
    printf ("ID => %d.\n",rec.id);
    printf ("Name => %s.\n",rec.name);
    printf ("Address => %s.\n",rec.address);
    printf ("Age => %d.",rec.age);
    getch ();
}