#include<stdio.h>//check the number is odd or even
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any integer number:");
	scanf("%d",&n);
	if(n%2==0)
	{
	printf("the number is even");
	}
	else
	{
	printf("the number is odd");
	}
	getch();
}