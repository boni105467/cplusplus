#include<stdio.h>// count total positive or negative number in array//
#include<conio.h>
void main()
{
	clrscr();
	int ar[5],p=0,n=0,i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter the number in array");
		scanf("%d",&n);
		if(ar[i]>0)
		{
			p++;
		}
		else
		{
			n++;
		}
	}
	printf("\n data are:-");
	for(i=0;i<5;i++)
	{
		printf("%d",ar[i]);
	}
	printf("\n total positive number=%d",p);
	printf("\n total negative number=%d",n);
	getch();
}