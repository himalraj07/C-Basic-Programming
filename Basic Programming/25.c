// Write a program to display following series using while loop
	// 1,4,9,16,..........,100.
//

#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=10)
    {
        printf("%d\t",i*i);
        i++;
    }
    return 0;
}