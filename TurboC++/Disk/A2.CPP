#include<stdio.h>
#include<conio.h>//struct using with array implement
void main()
{
struct student
	{
	int roll;
	char name[15];
	};
	struct student*s;
	printf("\n Enter roll:");
	scanf("%d",&s->roll);
	printf("\n Enter name:-");
	fflush(stdin);
	gets(s->name);
	printf("\n %d%5s",s->roll,s->name);
	getch();
}