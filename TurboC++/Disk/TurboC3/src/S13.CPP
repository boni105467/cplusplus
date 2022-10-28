#include<stdio.h>//initialize the array and display//
#include<conio.h>
void main()
{
	clrscr();
	int ar[5],i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter the five number in array");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d",ar[i]);
	}
	getch();
}