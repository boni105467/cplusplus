#include<stdio.h>//stack using array implementation//
#include<conio.h>
#include<process.h>
#define size 10
int info[size];
int top=-1;
void push();
void pop();
void peep();
void rev_peep();
void main()
{
	int ch;
	do
	{
		clrscr();
		printf("\n1.push\n2.pop\n3.peep\n4.rev_peep");
		printf("\n0.exit\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:peep();break;
			case 4:rev_peep();break;
			case 0:exit(0);
		}
		getch();
	}while(2);
}
void push()
{
	int x;
	if(top==size-1)
	{
		printf("\n stack is full");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	top++;
	info[top]=x;
}
void pop()
{
	int x;
	if(top==-1)
	{
		printf("\n stack is empty");
		return;
	}
	x=info[top];
	top--;
	printf("\n poped no=%d",x);
}
void peep()
{
	int i;
	if(top==-1)
	{
		printf("\n stack is empty");
		return;
	}
	printf("\n content \n");
	for(i=top;i>=0;i--)
	{
		printf("%4d",info[i]);
	}
}
void rev_peep()
{
	int i;
	if(top==-1)
	{
		printf("\n stack is empty");
		return;
	}
	printf("\n content reverse peep");
	for(i=0;i<=top;i++)
	{
		printf("%4d",info[i]);
	}
}
