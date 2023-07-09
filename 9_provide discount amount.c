/* Write a program to input sale amount from user and provide discount amount based on following conditions,
	Conditions		Discount
	<1000			No discount
	>=1000 and <10000	10%
	>=10000 and <50000	15%
	>=50000			20%
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int sa,da;
    printf (" Please enter the sell amount : ");
    scanf("%d",&sa);
    if (sa<1000)
    {da =sa*0/100;}
    else if (sa>=1000 && sa<10000)
    {da = sa*10/100;}
    else if (sa>10000 && sa<=50000)
    {da= sa*15/100;}
    else{da=sa*20/100;}
    printf(" Discount is : %d. ",da);
    getch();
}