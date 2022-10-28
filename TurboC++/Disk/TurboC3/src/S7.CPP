#include<stdio.h>//reverse of 3 digit number //
#include<conio.h>
void main()
{
	clrscr();
	int n,rev=0,r;
	printf("\n Enter the three digit number");
	scanf("%d",&n);
	r=n % 10;
	n=n/10;
	rev=(rev*10)+r;
	r=n % 10;
	n=n/10;
	rev=(rev*10)+r;
	r=n % 10;
	n=n/10;
	rev=(rev*10)+r;
	printf("\n reverse of a number=%d",rev);
	getch();
}