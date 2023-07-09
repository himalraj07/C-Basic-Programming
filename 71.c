/*
    Write a program to input a name from user and display
    => length of name
    => name in uppercase
    => name in lowercase
    => its reverse
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your Name: ");
    gets(name);
    printf("\n\nLength of name is: %d.\n", strlen(name));
    printf("Name in uppercase is: %s.\n", strupr(name));
    printf("Name in lowercase is: %s.\n", strlwr(name));
    printf("Reverse of name is: %s.\n", strrev(name));
    return 0;
}