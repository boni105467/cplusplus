#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct slist
{
	int n;
	slist *next;
};
void insertnodelast(slist **start,int a)
{
	slist *nw,*t;
	nw=(slist *)malloc(sizeof(slist));
	nw->next=NULL;
	{
		*start=nw;
	}

	{
		t=*start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=nw;
	}
	printf("\n one node insert in last:");
	void insertnodefirst(slist **start,int a)
	{
		slist *nw;
		nw=(slist *)malloc(sizeof(slist));
		nw->n=a;
		nw->next=*start;
		*start=nw;
		printf("\n one node insert in first");
	}
}
void display(slist *start)
{
	slist *t;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		t=start;
		while(t!=NULL)
		{
		printf("%d",t->N);
		t=t->next;
		}
	}
}
void search(slist *start,int s)
{
	int f=0;
	slist *t;
	if(start==NULL)
	{
		printf("node is empty...");
	}
	else
	{
		t=start;
		while(t!=NULL)
		{
		if(t->n==s)
		{
		f=1;
		break;
		}
		t=t->next;
		}
	}
}
if (f==0)
{
printf("not found...");
}
else
{
printf(" data is found");
}
void main()
{
	clrscr();
	int ch,a;
	slist *start=NULL;
	do;
	{
		clrscr();
		printf("\n1.insertnodelast");
		printf("\n2.insertnodefirst");
		printf("\n3.disply");
		printf("\n4.search");
		printf("\n0.Exit");
		printf("\n Enter your choice ");
		switch(ch)
		{
			case 1:printf("Enter number to be insert in last");
				scanf("%d",&a);
				insertnodelast(&start,a);
				getch();
				break;
			case 2:printf("Enter number to be search in first");
				scanf("%d",&a);
				insertnodefirst(s start,a);
				getch();
				break;
			case 3:
				disply(start);
				getch();
				break;
			case 4:printf("Enter number to be search");
				scanf("%d",&a);
				search(start,a);
				getch();
				break;
			default:
				printf("invalid choice option");
		}
		while(ch!=0);
		getch();
	}



