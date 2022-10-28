#include<stdio.h>//simple q using array implementation enqueue,deueue,display,rev_display//
#include<conio.h>
#include<process.h>
#define size 6
int info[size];
int front,rear;
void enqueue();
void dequeue();
void display();
void rev_display();
void main()
{
	int ch;
	front=rear=-1;
	do
	{
		clrscr();
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.rev_display");
		printf("\n0.exit\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:rev_display();break;
			case 0:exit(0);
		}
		getch();
	}while(2);
}
void enqueue()
{
	int x;
	if(rear==size-1)
	{
		printf("\n stack is full");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	rear++;
	info[rear]=x;
}
void dequeue()
{
	int x;
	if(rear==front)
	{
		printf("\n stack is full");
		return;
	}
	front++;
	x=info[front];
	printf("\n delete no=%d",&x);
}
void display()
{
	int i;
	if(rear==front)
	{
		printf("\n stack is empty");
		return;
	}
	printf("\n content of stack \n");
	for(i=front+1;i<=rear;i++)
	{
		printf("%4d",info[i]);
	}
}
void rev_display()
{
	int i;
	if(rear==front)
	{
		printf("\n stack is full");
		return;
	}
	printf("\n content of stack reverse y\n");
	for(i=rear;i>=front+1;i--)
	{
		printf("%4d",info[i]);
	}
}

