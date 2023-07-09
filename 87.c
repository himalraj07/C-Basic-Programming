/* Write a program to input id,name and address of 2 student and saved in a file using structure. */

#include<stdio.h>
struct Record
{
    int id;
    char name[20],address[20];
}rec;
void main()
{
    int i;
    FILE *fp;
    fp=fopen("abc.txt","w");
    for(i=0;i<2;i++)
    {
        printf("Enter your id: ");
        scanf("%d",&rec.id);
        printf("Enter your name: ");
        scanf("%s",rec.name);
        printf("Enter your address: ");
        scanf("%s",rec.address);
        fwrite(&rec, sizeof(struct Record),1,fp);
        printf("\n");
    }
    fclose(fp);
}