#include<stdio.h>//sum,average,percentage of 6 different subjects//
#include<conio.h>
void main()
{
	clrscr();
	float p,h,e,c,m,tm,av,pec;
	printf("\n Enter the marks of physics");
	scanf("%f",&p);
	printf("\n Enter the marks of chemistry");
	scanf("%f",&c);
	printf("\n Enter the marks of math");
	scanf("%f",&m);
	printf("\n Enter the marks of English");
	scanf("%f",&e);
	printf("\n Enter the marks of hindi");
	scanf("%f",&h);
	av=(p+c+m+e+h+c)/6;
	tm=p+c+m+e+h+c;
	pec=(tm/600)*100;
	printf("\n marks obtained by student in physics=%f",p);
	printf("\n marks obtained by student in chemistry=%f",c);
	printf("\n marks obtained by student in math=%f",m);
	printf("\n marks obtained by student in English=%f",e);
	printf("\n marks obtained by student in hindi=%f",h);
	printf("\n Total marks=%f",tm);
	printf("\n aversge marks=%f",av);
	printf("\n percent marks=%f",pec);
	getch();
}