#include<stdio.h>
#include<conio.h>//three digit integer number print reverse of the number
void main()
{
	int n,rem,rev=0;
	clrscr();
	printf("\n Enter three digit integer number:");
	scanf("%d",&n);
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
	rev=(rev*10)+n;
	printf("reverse of inputed number=%d",rev);
	getch();
}
