/*Write a program to input name,age,address from user and saved in a file name "abc.txt". */

#include<stdio.h>
void main()
{
    char name[20],address[20];
    int age;
    FILE * fp;
    fp=fopen("abc.txt","w");
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your address: ");
    scanf("%s",address);
    fprintf(fp, "%s %d %s",name,age,address);
    fclose(fp);
}