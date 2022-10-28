#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char Name[15];
};
void input()
	{
		for(int i=0;i<5;i++)
		{
		printf("\n Enter roll:-");
		scanf("%d",&s[i].roll);
		printf("\n Enter Name:-");
		scanf("%c",&s[i].Name);
		fflush(stdin);
		gets(s[]Name);
		}
	}
	void show()
	{
	for(int i=0;i<5;i++)
	printf("\n %d%5s",s[i].roll,s[i].Name);// aaray with Parameter
	}
	void main()
	{
	clrscr();
	input();
	show();
	getch();
	}
