#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float f,c;
	clrscr();
	printf("\n Enter the temparature of centigrated:");
	scanf("%f",&c);
	f=(5.0/9.0)*(c-32.0);
	printf("\n calculated faren hight temparature:%f",f);
	getch();
}