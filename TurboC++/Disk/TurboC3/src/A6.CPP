#include<stdio.h>//write a prg to following operation on circular queue using array
#include<conio.h>
#define size 10
int info[size];
int front,rear,flag;
void enqueue();
void dequeue();
void display();
void rev_display();
void main()
{
	int ch;
	front=rear=flag=0;
	do
	{
		clrscr();
		printf("\n1.insert\n2.dequeue\n3.display");
		printf("\n4.reverse\n0.exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;

		}
		getch();
	}while(2);
}
void enqueue()
{
	int x;
	if(rear==front && flag==1)
	{
		printf("\n circular queue full");
		return;
	}
	printf("\n Enter a value");
	scanf("%d",&x);
	info[rear]=x;
	rear=(rear+1)%size;
	flag=1;
}
void dequeue()
{
	int x;
	if(rear==front && flag==0)
	{
		printf("\n queue is empty");
		return;
	}
	x=info[front];
	front=(front+1)%size;
	flag=0;
	printf("\n deleted no=%d",x);
}
void display()
{
	int i,f;
	if(rear==front && flag==0)
	{
		printf("\n Queue is empty");
		return;
	}
	f=flag;
	i=front;
	printf("\n content\n");
	while(i!=rear||f==1)
	{
	printf("%4d",info[i]);
	i=(i+1)%size;
	f=0;
	}
}
void rev_display()
{
	int i,f;
	if(rear==front&&flag==0)
	{
		printf("\n cilcular Queue is empty");
		return;
	}
	i=rear;
	f=flag;
	printf("\n content reversly\n");
	while(i!=front||f==0)
	{
		i--;
		if(i<0)
		{
		i=size-1;
		}
		printf("%4d",info[i]);
		f=0;
	}
}




