/*
    Write a program to display following series
	1,4,9,16,..........,100.
*/

#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i=i+1)
    {
        printf("%d,", i*i);
    }
    return 0;
}