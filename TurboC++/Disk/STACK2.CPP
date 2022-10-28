#include<stdio.h>//Q using linklist operation enqueue,dequeue,display//
#include<conio.h>
#include<alloc.h>
struct node
{
	int info;
	node *next;
};
void enqueue();
void dequeue();
void Display();
void rev_Display();
node *start=NULL;
void main()
{
	int ch;
	do
	{
		clrscr();
		printf("\n1.enqueue\n2.dequeue\n3.Display\4.rev_Dsplay");
		printf("\n0.exit");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();break;

			case 2:dequeue();break;
			case 3:Display();break;
			case 4:rev_Display();break;
		}
		getch();
	}while(2);
}
void dequeue()
{
	node *t;
	if(start==NULL)
	{
	printf("\n Q is empty");
	return;
	}
	t=start;
	start=t->next;
	printf("\n Deleted no=%d",t->info);
	free(t);
}
void display()
{
	node *p;
	if(start==NULL)
	{
	printf("\n Q is empty");
	return;
	}
	printf("\n content\n");
	p=start;
	while(p!=NULL)
	{
	printf("%4d",p->info);
	p=p->next;
	}
}
void rev_Display(node *p)
{
	if(p->next !=NULL)
	{
	printf rev_display (p->next);
	}
	printf("%4d",p->info);
}
void enqueue()
{
	node *t,*cur;
	t=(node *)malloc(sizeof(node));
	printf("\n Enter a value");
	scanf("%d",&t->info);
	t->next==NULL;
	if(start==NULL)
	{
		start=t;
	}
	else
	{
		cur=start;
		while(cur->next!NULL)
		{
			cur=cur->next;
		}
		cur->next=t;
	}
}




