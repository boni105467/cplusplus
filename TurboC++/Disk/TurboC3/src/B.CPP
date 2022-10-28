#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		clrscr();
		int roll;
		char Name[15];
	};
	struct student *s;
	{
		printf("Enter roll");  //structure using pointer and array
		scanf("%d",&s->roll);
		printf("Enter name:-");
		fflush(stdin);
		gets(s->Name);
		printf("\n %d %5s",s->roll,s->Name);
		getch();
	 };
}