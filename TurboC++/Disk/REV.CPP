#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,rev=0;
	clrscr();
	printf("Enter the three digit integer number:");
	scanf("%d",&n);
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
	rev=(rev*10)+n;
	printf("Reverse of inputed number=%d",rev);
	getch();
}
