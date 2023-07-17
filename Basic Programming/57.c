// Write a program to input length and breadth and display it's area using function. //

#include<stdio.h>
int recarea(int,int);
void main()
{
    int l,b,area;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    area=recarea(l,b);
    printf("Area of ractangle is: %d.",area);
}
int recarea(int l,int b)
{
    int area;
    area=l*b;   
}