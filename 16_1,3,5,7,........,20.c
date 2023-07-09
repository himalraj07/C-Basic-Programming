/* Write a program to display following series
	1,3,5,7,........,20.
*/

#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i=i+2)
    {
        printf("%d,", i);
    }
    return 0;
}