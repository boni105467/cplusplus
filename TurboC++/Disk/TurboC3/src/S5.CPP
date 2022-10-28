#include<stdio.h>//program of nearest integer number//
#include<conio.h>
void main()
{
	clrscr();
	float f1,f2;
	int a;
	printf("\n Enter the value of f1");
	scanf("%f",&f1);a=f1;f2=(f2-a);
	if(f2>0.5)
	{
		printf("%d",a+1);
	}
	else
	{
		printf("%d",a);
	}
	getch();


