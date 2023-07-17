/* Write a program to display following series
	2,4,6,8,...........,30.
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=30;i=i+2)
    {
        printf("%d,",i);
    }
    return 0;
}