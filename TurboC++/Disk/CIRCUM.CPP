#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float area,circumference;
	clrscr();
	printf("Enter the radius of the circle:-");
	scanf("%d",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("Area of the circle=%f",area);
	printf("circumference of the circle=%f",circumference);
	getch();
}

