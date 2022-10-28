#include<stdio.h>// modification in array//
#include<conio.h>
void main()
{
	clrscr();
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
	int n,i;
	printf("\n Enter the number to be modify in array");
	scanf("%d",&ar[i]);
	for(i=0;i<10;i++)
	{
		if(ar[i]==n)
		{
			printf("\n Enter the new  number");
			scanf("%d",&ar[i]);
		}
	}
	printf("\n after modification data are");
	for(i=0;i<10;i++)
	{
		printf("\n %d",ar[i]);
	}
	getch();
}
