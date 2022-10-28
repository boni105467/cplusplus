#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct stack
{
	int n;
	stack *next;
};
void push(stack **top,int a)
{
	stack *nw;
	nw=(stack*)malloc(sizeof(stack));
	if(nw==NULL)
	{
	printf("memory not allocaed");
	}
	else
	{
		nw->n=a;
		nw->next=*top;
		*top=nw;
		printf("one node push in stack");
	}
}
pop(stack **top)
{
	stack *t;
	if(*top==NULL)
	{
	printf("stack under flow");
	}
	else
	{
	t=*top;
	*top=t->next;
	free(t);
	printf("one data poped in stack");
	}

void peep(stack *top)
{

	stack *t;
	if(*top==NULL)
	{
	printf("stack is underflow");
	}
	else
	{
	t=top;
	while(t!=NULL)
	{
	printf("\n %d",t->n);
	t=t->next;
	}
	}
}
void main()
{
	clrscr()
	int ch,a;
	do
	{
	clrscr();
	printf("\n1.push\n2.pop\n3.peep");
	printf("\n0.exit");
	printf("\n Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\n Enter number to be push in stack");
	scanf("%d",&a);
	push(&start,a);
	getch();
	break;
	case 2:
	printf("\n Enter number to be poped in stack");
	scanf("%d",&a);
	pop(&start,a);
	getch();
	break;
	case 3:
	display(start);
	getch();
	break;
	default;
	printf("\n invalid choice....");
	}
	}while(ch!=0)
	getch();
	}