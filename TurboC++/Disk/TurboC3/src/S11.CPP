#include<stdio.h>// interchange of two number using 3 variable//
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	printf("\n Enter the value of a");
	scanf("%d",&a);
	printf("\n Enter the value of b");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n swap value=%d%d",a,b);
	getch();
}