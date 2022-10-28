#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct slist
//single linklist delete node first and delete last and delete any node
{
	int n;
	slist *next;
};
void delete_first(slist **start)
{
	slist *t;
	if(*start==NULL)
	{
	printf("\n list is empty");
	}
	else
	{
		t=*start;
		*start=t->next;
		free(t);
		printf("first node delete");
	}
}
void delete_last(slist **start)
{
	slist *t,*prev;
	if(*start==NULL)
	{
	printf("\n list is empty");
	}
	else
	{
		t=*start;
		while(t->next!=NULL)
		{
		prev=t;
		t=t->next;
		}
		prev->next=t->next;
		free(t);
		printf("last node deleted");
	}
 }
void delete_anynode(slist **start,int s)
{
	slist *t,*prev=NULL;
	int f=0;
	if(*start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		t=*start;
		while(t!=NULL)
		{
			if(t->n==s)
			{
				f=1;
				break;
			}
			prev=t;
			t=t->next;
		}
		if(f==0)
		{
			printf("not found");
		}
		else
		{
			if(prev==NULL)
			{
				*start=t->next;
			}
			else
			{
				prev->next=t->next;
			}
		}
			free(t);
			printf("one node deleted");

	}
}
void main()
{
	clrscr();
	int ch,a;
	slist *start=NULL;
	do
	{
		clrscr();
		printf("\n1.delete node first");
		printf("\n2.delete node last");
		printf("\n3.delete any node");
		printf("\n0.exit");
		printf("\n Enter any choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		delete_first(&start);
		getch();
		break;
		case 2:
		delete_last(&start);
		getch();
		break;
		case 3:
		printf("\n enter number to be deleted");
		scanf("%d",&a);
		delete_anynode(&start,a);
		getch();
		break;
		default:
		printf("\n invailid choice");
		}
		}while(ch!=0);
		getch();

}






