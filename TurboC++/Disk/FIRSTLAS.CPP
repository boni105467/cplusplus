#include<stdio.h>//sum of a particular digit and print sum of first and last digit
#include<conio.h>
void main()
{
	int n,rem,s=0,last,first;
	clrscr();
	printf("\n Enter three digit integer numbetr:");
	scanf("%d",&n);
	rem=n%10;
	s=s+rem;
	n=n/10;
	s=s+n;
	last=n%10;
	first=n/100;
	s =first+last;
	printf("\n sum of the digit =%d",s);
	printf("\n sum of the first and last digits=%d",s);
	getch();
}
