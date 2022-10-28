#include<stdio.h>
#include<conio.h>
void main()
{
	float n,f;
	int x;
	clrscr();
	printf("\n Enter the value of n");
	scanf("%f",&n);
	x=int(n);
	f=n-x;
	if(f>=0.5)
	{
		x++;
	}
	printf("\n nearest integer =%d",x);

	getch();
}
