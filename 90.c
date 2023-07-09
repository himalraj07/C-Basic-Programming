/* Write a program to animate 50 circles using graphics function. */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int i,x,y,c;
	initwindow(800,800);
	setcolor(YELLOW);
	for(i=0;i<50;i++)
	{
		c=rand()%15;
		x=rand()%800;
		y=rand()%800;
		setcolor(c);
	   circle(x,y,50);
		delay(100);
	}
	getch();
}