#include<stdio.h>//leap year or not
#include<conio.h>
void main()
{
	int year;
	printf("\n Enter any year:");
	scanf("%d",&year);
	if(year%4==0)
	{
	printf("%d is a leap year",year);
	}
	else
	{
	printf("%d is not a leap year",year);
	}
	if(year%100==0)
	{
	if(year%400==0)
	{
	printf("%d is a leap year",year);
	}
	else
	{
	printf("%d is not a leap year",year);
	}
	}
	else
	{
	printf("%d is a leap year",year);
	}
	getch();
}
