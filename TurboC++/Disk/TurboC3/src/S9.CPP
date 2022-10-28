#include<stdio.h>// sum of first and last digit in 3 digit number//
#include<conio.h>
void main()
{
	clrscr();
	int n,sum=0,r,c;
	printf("\n Enter the three digit number");
	scanf("%d",&n);
	r=n % 10;
	n=n/10;
	sum=sum+r;
	r=n%10;
	n=n/10;
	r=n % 10;
	n=n/10;
	c=sum+r;
	printf("\n sum=%d",c);
	getch();
}