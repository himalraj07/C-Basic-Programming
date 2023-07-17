/* Write a program to display following series
	1,2,3,............,20.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i==20)
        printf("%d",i);
        else
        printf("%d,",i);
    }
    getch();
    return 0;
}