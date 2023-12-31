/*
	Write a program to draw a house using graphics function.
*/

#include <conio.h>
#include <graphics.h>

int main()
{
	initwindow(1280, 800);
	setcolor(RED);

	// Roof
	line(100, 300, 200, 200);
	line(300, 300, 200, 200);
	line(92, 300, 200, 192);
	line(200, 192, 308, 300);
	line(92, 300, 100, 300);
	line(300, 300, 308, 300);
	line(100, 300, 100, 700);
	line(300, 300, 300, 700);
	line(100, 700, 300, 700);
	line(208, 200, 1000, 200);
	line(300, 400, 1030, 400);
	line(1000, 200, 1030, 400);

	// Body
	setcolor(GREEN);
	rectangle(300, 400, 1000, 700);

	// Door
	setcolor(BROWN);
	rectangle(400, 450, 550, 700);
	circle(420, 575, 10);

	// Window
	setcolor(BLUE);
	rectangle(650, 425, 850, 550);
	rectangle(658, 432, 842, 542);
	line(750, 433, 750, 542);
	line(658, 485, 842, 485);
	circle(200, 350, 60);
	line(200, 290, 200, 410);
	line(140, 350, 260, 350);

	// Chimney
	setcolor(BROWN);
	rectangle(850, 185, 910, 200);
	rectangle(855, 150, 905, 185);

	getch();
}