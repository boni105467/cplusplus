#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct slist
{
	int n;
	slist *next;
};
void createlist(slist **start)
{
	slist *nw,*t;
	char ch;
	do
	{

		printf("\n Enter the %d to be linked",n);
		scanf("%d",&n);
		nw=(slist*)malloc(sizeof(slist));
		nw->=a;
		n++;
		nw->next=NULL;
		if(*start==NULL)
		{
			*start=nw;
		}
		else
		{
			t=*start;
			while t->next|=NULL)
			{
				t=t->next;
			}
			t->next=nw;
		}
		fllush(stdin);
		printf("\n do u want to continue..(y/n)");
		scanf("%c",&ch);
		}while(ch=='y');
	}
	void transverse *list(slist *start)
	{
		slist *t;
		if(start==NULL)
		{
		printf("\n List is Empty");
		}
		else
		{
			t=start;
			while(t|=NULL)
			{
			printf("\n %d",t->n);
			t=t->next;
			}
		}
	}
	void main()
	{
		clrscr();
		slist *start =NULL;
		printf("\n Create a linked list");
		create-list(start);
		printf("\n Display the content of list\n");
		Traverse list(start);
		getch();
	}




