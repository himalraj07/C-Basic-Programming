// Write a program to display following series using while loop
	2,5,10,17,......,100.
//

#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=10)
    {
        printf("%d\t",i*i+1);
        i++;
    }
    return 0;
}