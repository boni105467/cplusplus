#include<stdio.h>
#include<conio.h>
struct student
	{
		int roll;
		char Name[15];
	};
	void input(student s)
	{
	printf("\n Enter roll:-");
	scanf("%d",&s.roll);
	printf("\n Enter Name:-");
	scanf("%c",&s.Name);
	fflush(stdin);
	gets (s.Name);
	}
	void show(struct student s)
	{
	printf("%d%5s",s.roll,s.Name);
	}
	void main()
	{
	clrscr();
	 struct student s;
	input(s);
	show(s);
	getch();
	}