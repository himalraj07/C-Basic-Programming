/* Write a program for these services:
	* Calculation service:
	1. Add two numbers
	2. Check even or odd
	3. Multiply two numbers
	4. Compare two numbers
	5. To calculate area of square
	6. To calculate area of circle
	7. To calculate quotient and remainder
	8. To calculate Discount amount
	9. To find exam reasult
	10. Exit
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int ch,a,b,s,num,m,side,dividend, divisor, quotient, remainder,sa,da,percentage;
    float radius;
    printf ("\n");
    printf (" #. Calculation services : \n");
    printf (" 1. Add two numbers \n");
    printf (" 2. Check even or odd \n");
    printf (" 3. Multiply two numbers \n");
    printf (" 4. Compare two numbers \n");
    printf (" 5. To calculate area of square \n");
    printf (" 6. To calculate area of circle \n");
    printf (" 7. To calculate quotient and remainder \n");
    printf (" 8. To calculate Discount amount \n");
    printf (" 9. To find exam reasult \n");
    printf (" 10. Exit \n");
    printf ("  \n");
    printf (" Please enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf (" Please enter the first number: ");
        scanf ("%d",&a);
        printf (" Please enter the second number: ");
        scanf ("%d",&b);
        s=a+b;
        printf (" The sum of %d and %d is %d. ",a,b,s);
        break;

        case 2:
        printf(" Please enter a number: ");
        scanf("%d", &num);
        if(num % 2 == 0)
        printf(" %d is an even number. ", num);
        else
        printf(" %d is an odd number. ", num);
        break;

        case 3:
        printf (" Please enter the first number: ");
        scanf ("%d",&a);
        printf (" Please enter the second number: ");
        scanf ("%d",&b);
        m=a*b;
        printf (" The multiply of %d and %d is %d. ",a,b,m);
        break;

        case 4:
        printf (" Please enter the first number: ");
        scanf ("%d",&a);
        printf (" Please enter the second number: ");
        scanf ("%d",&b);
        if (a>b)
        printf (" The number %d is greater than %d. ",a,b);
        else
        printf (" The number %d is greater than %d. ",b,a);
        break;

        case 5:
        printf(" Please enter the side: ");
        scanf("%d", &side);
        printf(" The area of square is : %d. ", side * side);
        break;

        case 6:
        printf(" Please enter the radius: ");
        scanf("%f", &radius);
        printf(" The area of circle is : %f. ", 3.14 * radius * radius);
        break;

        case 7:
        printf(" Please enter dividend: ");
        scanf("%d", &dividend);
        printf(" Please enter divisor: ");
        scanf("%d", &divisor);
        quotient = dividend / divisor;
        remainder = dividend % divisor;
        printf(" Quotient = %d. \n", quotient);
        printf(" Remainder = %d. ", remainder);
        break;

        case 8:
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
        break;

        case 9:
        printf (" Please enter the percentage : ");
        scanf("%d",&percentage);
        if (percentage>=80)
        printf(" 'You scored Distinction' ");
        else if (percentage>=60 && percentage<80)
        printf(" 'You scored First Division' ");
        else if (percentage>=50 && percentage<60)
        printf(" 'You scored Second Division' ");
        else if (percentage>=40 && percentage<50)
        printf(" 'You scored Third Division' ");
        else if (percentage<40)
        printf(" 'You are Failed' ");
        break;

        case 10:
        exit(0);
        default:
        printf(" Sorry, you are choosed an invalid number. please choose a valid number and try again later. ");
    }
    getch();
}