/* Write a program to input 2 student information (id,name,age,section) from user and save in a file. And also display the same from reading file. */

#include<stdio.h>
void main()
{
    char name[20],section[5];
    int id,age,i;
    FILE *fp;
    fp=fopen("abc.txt","w");
    for(i=0;i<2;i++)
    {
        printf("Enter your id: ");
        scanf("%d",&id);
        printf("Enter your name: ");
        scanf("%s",name);
        printf("Enter your age: ");
        scanf("%d",&age);
        printf("Enter your section: ");
        scanf("%s",section);
        fprintf(fp,"%d\t%s\t%d\t%s\n",id,name,age,section);
        printf("\n");
    }
    rewind(fp);
    fp=fopen("abc.txt","r");
    while(fscanf(fp,"%d%s%d%s",&id,name,&age,section)!=EOF)
    {
        printf("\n%d\t%s\t%d\t%s",id,name,age,section);
    }
    fclose(fp);
    printf("\n");
}