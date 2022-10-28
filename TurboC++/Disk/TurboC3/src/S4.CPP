#include<stdio.h>//prime number//
#include<conio.h>
void main()
{
	clrscr();
	int n,i,c=i;
	printf("\n Enter the unsigned integer");
	scanf("%d",&n);
	if(n>0 && n<11)
	{
		for(i=2;i<n;i++)
		{
			i++;
			break;
		}
	}
	if(c==0)
	{
		printf("\n prime number=%d",n);
	}
	else
	{
		printf("\n number not in range");
	}
	getch();
}