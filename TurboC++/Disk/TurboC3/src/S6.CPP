#include<stdio.h>//sum of 5 floating number//
#include<conio.h>
void main()
{
	clrscr();
	float a,b,c,d,e,s,av;
	printf("\n Enter the 5 floating number");
	scanf("\n %f%f%f%f%f%f%f",&a,&b,&c,&d,&e);
	s=a+b+c+d+e/5;
	printf("\n sum=%f",s);
	printf("\n average=%f",av);
	getch();
}