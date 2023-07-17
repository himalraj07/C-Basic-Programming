/* Write a program to delete Record "abc" from following file. */

#include<stdio.h>
void main()
{
    int age,id;
    char name[20],section[5];
    FILE *fr,*fw;
    fr=fopen("abc.txt","r");
    fw=fopen("Corrected.txt","w");
    while(fscanf(fr,"%d%s%d%s",&id,name,&age,section)!=EOF)
    {
        if(strcmp(name,"abc")==0)
        continue;
        fprintf(fw,"%d\t%s\t%d\t%s\n",id,name,age,section);
    }
    fclose(fr);
    fclose(fw);
    remove("abc.txt");
    rename("Corrected.txt","abc.txt");
    return 0;
}