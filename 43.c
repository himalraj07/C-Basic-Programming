// Write a program to display following pattern.
	* * * * *
	* * * *
	* * *
	* *
	*
//

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}