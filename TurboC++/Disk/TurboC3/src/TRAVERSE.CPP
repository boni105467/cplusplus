#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct slist
{
	int n;
	slist *next;
};
void create_list(slist **start)
{
	slist *nw,*t;
	int a,num=0;
	char ch;
	do
	{
		num=num+1;
		printf("\n Enter the %d to be linked",num);
		scanf("%d",&a);
		nw=(slist*)malloc(sizeof(slist));
		nw->n=a;
	       //	n++;
		nw->next=NULL;
		if(*start==NULL)
		{
			*start=nw;
		}
		else
		{
			t=*start;
			while(t->next!=NULL)
			{
				t=t->next;
			}
			t->next=nw;
		}
		fflush(stdin);
		printf("\n do u want to continue..(y/n)");
		scanf("%c",&ch);
	}while(ch=='y');

}
void traverse_list(slist *start)
	{
		slist *t;
		if(start==NULL)
		{
		printf("\n List is Empty");
		}
		else
		{
			t=start;
			while(t!=NULL)
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
		create_list(&start);
		printf("\n Display the content of list\n");
		traverse_list(start);
		getch();
	}





