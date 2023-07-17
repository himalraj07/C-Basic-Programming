/* Write a program to read name,age and address from a file name abc.txt and display it in proper format. */

#include<stdio.h>
void main()
{
    char name[20],address[20];
    int age;
    FILE * fp;
    fp=fopen("abc.txt","r");
    while(fscanf(fp,"%s %d %s",name,&age,address) != EOF)
    {
        printf("Name: %s\n",name);
        printf("Age: %d\n",age);
        printf("Address: %s\n",address);
        fclose(fp);
    }
}