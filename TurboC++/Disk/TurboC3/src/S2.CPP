#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int bs,gs,da,hra;
	printf("\n Enter the ramesh basic salary");
	scanf("%d",&bs);
	da=bs*0.6;
	hra=bs*0.35;
	gs=bs+da+hra;
	printf("\n gross salary=%d",gs);
	getch();
}
