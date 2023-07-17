/* Write a program to draw a circle, arc, rectangle, line, ellipse and show all them on screen by using graphics function. */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int setbkcolor(int WHITE);
	initwindow(800,800);
	setcolor(RED);
	circle(300,300,50);
	delay(1000);
	setcolor(BLUE);
	ellipse(250,200,0,360,100,50);
	delay(1000);
	setcolor(GREEN);
	rectangle(400,350,500,670);
	delay(1000);
	setcolor(RED);
	line(300,300,500,500);
	delay(1000);
	setcolor(YELLOW);
	arc(300,200,400,200,100);
	delay(1000);
	//fillellipse(100,100,50,25);
	delay(1000);
	setcolor(BLUE);
	outtextxy(400,500,"UNIQUE_ADHIKARI");
	getch();
}