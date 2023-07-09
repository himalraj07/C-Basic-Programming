// Write a program to display following series
	2,5,10,17,......,100.
//

#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=9;i=i+1)
    {
        printf("%d,", i*i+1);
    }
    return 0;
}