#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("\n how many line do u want ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n-i;j++)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
	printf("*");
	}
	printf("\n");
	}
	getch();
}
