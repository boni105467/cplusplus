#include<stdio.h>
#include<conio.h>
void figstr(int);
void figstr(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{

	for(j=1;j<=n-i;j++)
	{
	printf(" ");
	}
	for(k=1;k<=2*i;k++)
	{
	printf("*");
	}
	printf("\n");
	}
	}
	void main()
	{
	int n;
	printf("\n how many line");
	scanf("%d",&n);
	figstr(n);
	getch();
	}