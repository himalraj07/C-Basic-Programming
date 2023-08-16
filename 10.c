/*
    Write a program to input percentage marks from user and provide division based on following conditions,
    Percentage		    Division
    >=80			    Distinction
    >=60 and <80		First Division
    >=50 and <60		Second Division
    >=40 and <50		Third Division
    <40			        Failed
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int percentage;

    printf(" Please enter the percentage : ");
    scanf("%d", &percentage);

    if (percentage >= 80)
        printf(" 'You scored Distinction' ");

    else if (percentage >= 60 && percentage < 80)
        printf(" 'You scored First Division' ");

    else if (percentage >= 50 && percentage < 60)
        printf(" 'You scored Second Division' ");

    else if (percentage >= 40 && percentage < 50)
        printf(" 'You scored Third Division' ");

    else if (percentage < 40)
        printf(" 'You are Failed' ");

    getch();
}