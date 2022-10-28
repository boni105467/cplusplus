#include<stdio.h>//display array in display order//
#include<conio.h>
void main()
{
	clrscr();
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter the number in array");
		scanf("%d",&a[i]);
	}
	for(i=4;i>0;i--)
	{
		printf("\n array in reverse order=%d",a[i]);
	}
	getch();
}

