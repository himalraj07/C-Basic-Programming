/* Write a program to input id,name and address and saved in a file using structure. */

#include<stdio.h>
struct Record
{
    int id;
    char name[20],address[20];
}rec;
void main()
{
    FILE *fp;
    fp=fopen("abc.txt","w");
    printf("Enter your id: ");
    scanf("%d",&rec.id);
    printf("Enter your name: ");
    scanf("%s",rec.name);
    printf("Enter your address: ");
    scanf("%s",rec.address);
    fwrite(&rec,sizeof(struct Record),2,fp);
    fclose(fp);
}