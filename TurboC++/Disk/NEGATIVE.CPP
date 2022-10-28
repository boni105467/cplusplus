#include<stdio.h>//negative or positive
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n Enter any number");
	scanf("%d",&n);
	if(n>0)
	{
	printf("%d is positive number",n);
	}
	else
	{
	printf("%d is a negative number",n);
	}
	getch();
}