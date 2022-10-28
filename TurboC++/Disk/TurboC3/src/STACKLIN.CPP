#include<stdio.h>//wap to perfrom the following operation on tstack using linklist push,pop,peep,rev_peep//
#include<conio.h>
#include<alloc.h>
struct node
{
	int info;
	node *next;
};
void push();
void pop();
void peep();
void rev_peep();
node *start=NULL;
void main()
{
	int ch;
	do
	{
		clrscr();
		printf("\n1.push\n2.pop\n3.peep\n4.rev_peep\n0.exit");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:push();break;
		case 2:pop();break;
		case 3:peep();break;
		case 4:rev_peep();break;

		}
		getch();
	}while(2);
}
void pop()
{
	node *p;
	if(start==NULL)
	{
	printf("\n stack is empty");
	return;
	}
	printf("\n content \n");
	p=start;
	while(p!=NULL)
	{
	printf("%4d",p->info);
	p=p->next;
	}
}
void push()
{
	node *t;
	t=(node *)malloc(sizeof(node));
	printf("\n enter a value");
	scanf("%d",&t->info);
	t->next=start;
	start=t;
}
void pop()
{

	node *t;
	if(start==NULL)
	{
	printf("\n stack is empty");
	return;
	}
	t=start;
	start=t->next;
	printf("\n deleted no=%d",t->info);
	free(t);
}
void rev_peep(node *p)
{
	if(p->next!=NULL)
	{
	rev_peep(p->next);
	}
	printf("%4d",p->info);
}




