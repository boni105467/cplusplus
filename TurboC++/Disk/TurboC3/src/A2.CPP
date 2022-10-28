#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,r;
	clrscr();
	printf("\n Enter value of n");
	scanf("%d",&n);
	r=int(sqrt(n));
	if(r*r==n)
	{
		printf("\n %d is perfect square",n);
	}
	else
	{
		printf("%d is not perfect square",n);
	}
	getch();
}