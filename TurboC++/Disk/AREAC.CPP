#include<stdio.h>
#include<conio.h>//area and circumference of the circle
void main()
{
	int r;
	float area,circumference;
	clrscr();
	printf("\n Enter the radius of the circle:");
	scanf("%d",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("Area of the circle=%f",area);
	printf("cicumference of the circle=%f",circumference);
	getch();
}
