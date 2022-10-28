#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
	int roll;
	char Name[15];
	}

	struct student s;
	void input()
	{
	printf("Enter roll:-");
	scanf("%d",&s.roll);

	printf("Enter Name:-");
	fflush(stdin);
	gets(s.Name);
	}
	void show()
	{
	printf("%d%5s",s.roll,s.Name);
	}
	void main()
	{
	clrscr();
	input();
	show();
	getch();
	};
}