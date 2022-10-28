#include<stdio.h>//sum of all dta in matrix//
#include<conio.h>
void main()
{
	clrscr();
	int ar[3][3],i,j,s=0;
	for(i=0;i<3;i++)
	{
		printf("\n Enter the [%d][%d]elementof 3*3 matrix",i,j);
		scanf("%d",&ar[i][j]);
	}

printf("\n data are:-");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	s=s+ar[i][j];
	}
}
printf("\n Total sum=%d",s);
getch();
}