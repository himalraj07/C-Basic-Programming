/* Write a program to draw a circle using graphics function. */

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	initwindow(800,800);
	setbkcolor(WHITE);
	setcolor(BLACK);
	circle(300,300,50);
	getch();
}