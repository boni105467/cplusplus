#include<stdio.h>// sum of the right diognal in 2d  array//
#include<conio.h>
void main()
{
	clrscr();
	int ar[3][3],i,j,s=0,d=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter the [%d] element of 3*3 matrix",i,j,s);
		}
	}
	printf("\n data are:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==2)
			{
				d=ar[i][j];
			}
		}
	}
	s=s+d;
	printf("\nsum of the right diognal=%d",d);
	getch();
}
