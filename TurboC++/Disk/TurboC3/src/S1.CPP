       //sum of the first and last dugit i n five digit number
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,n,c,sum=0;
	printf("\n Enter the five digit number");
	scanf("%d",&n);
	r=n  % 10;
	n=n/10;
	sum=sum+r;
	r=n % 10;
	n=n/10;

	r=n % 10;
	n=n/10;

	r=n % 10;
	n=n/10;
	r=n % 10;
	n=n/10;
	c=sum+r;
	printf("sum of first and last digit=%d",c);
	getch();
}


