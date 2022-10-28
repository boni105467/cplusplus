#include<stdio.h>//smallest number in array//
#include<conio.h>
void main()
{
	clrscr();
	int ar[5],i,s=0;
	for(i=0;i<5;i++)
	{
		printf("\n Enter the number in array");
		scanf("%d",&ar[i]);
	}
	s=ar[0];
	printf("\n Element of array are");
	for(i=0;i<5;i++)
	{
		if(s>ar[i])
		{
			s=ar[i];
		}
	}
	printf("\n smallest number =%d",s);
	getch();
}
