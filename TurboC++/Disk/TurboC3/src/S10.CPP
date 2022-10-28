#include<stdio.h>//entetrchange of two numbers//
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	printf("\n Enter the value of a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap value=%d%d",a,b);
	getch();
}