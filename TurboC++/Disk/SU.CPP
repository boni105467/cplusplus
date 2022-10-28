#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0,last,first,sum 1;
	clrscr();
	printf("\n Enter three digit integer number:");
	scanf("%d",&n);
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	sum=sum+n;
	last=n%10;
	first=n/10;
	sum 1=first+last;
	printf("sum of the digit=%d",sum);
	printf("sum of first and last digits=%d",sum);
	getch();
}