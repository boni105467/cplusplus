#include<stdio.h>// sum of three digit number//
#include<conio.h>
void main()
{
	clrscr();
	int n,r,sum=0;
	printf("\n Enter the three digit number ");
	scanf("%d",&n);
	r=n % 10;
	n=n/10;
	sum=sum+r;
	r=n % 10;
	n=n/10;
	sum=sum+r;
	r=n % 10;
	n=n/10;
	sum=sum+r;
	printf("\n sum of the each digit =%d",sum);
	getch();
}

