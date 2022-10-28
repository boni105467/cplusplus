#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("\n Enter any integer number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
		printf("%d is greater number",a);
		}
		else
		{
		printf("%d is not greater number",c);
		}
	}
	else
	{
		if(b>c)
		{
		printf("%d is greater number",b);
		}
		else
		{
		printf("%d is greater number",c);
		}
	}
	getch();
}

