#include<stdio.h>//searching element in array//
#include<conio.h>
void main()
{
	clrscr();
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
	int f=0,i,n;
	printf("\n Enter the number to be search in array");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(ar[i]==n)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\n number found in array");
	}
	else
	{
		printf("\n number does not found in array");
	}
	getch();
}
