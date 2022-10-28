#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,num,large=0;
	printf("Enter how many number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Enter the number",i);
		scanf("%d",num);
		if (num>large)
		large=num;
	}
	printf("\n largest number=%d",large);
	getch();
}