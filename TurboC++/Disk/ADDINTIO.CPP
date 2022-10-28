#include<stdio.h>
#include<conio.h>
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
	printf("\n calculated the first integer number=%d",c);
	printf("\n calcultaed the second integer number =%d",d);
	printf("\n calculated the intger number=%d",e);
	printf("\n calculated the integer number%d",f);
	printf("\n calculated the integer number=%d",g);
	getch();
}
