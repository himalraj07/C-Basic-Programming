/* Write a program to input two words and display they are equal or not. */

#include<stdio.h>
#include<string.h>
int main()
{
    char w1[20],w2[20];
    printf("Enter first word: ");
    scanf("%s",w1);
    printf("Enter second word: ");
    scanf("%s",w2);
    if(strcmp(w1,w2)==0)
    {
        printf("Words are same.");
    }
    else
    {
        printf("Words are not same.");
    }
    return 0;
}