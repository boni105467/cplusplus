#include<stdio.h>
#include<conio.h>//write a c program to accept two integer number through the

void main()
{
	int a,b,c,d,e,f,g;
	clrscr();
	printf("\n Enter the first integer number");
	scanf("%d",&a);
	printf("\n Enter the second integer number");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("\n sum of the numbers=%d",c);
	printf("\n difference of the number=%d",d);
	printf("\n Multiplication of the numbers=%d",e);
	printf("\n Division of the number=%d",f);
	printf("\n remainder of the numbers=%d",g);
	getch();
}