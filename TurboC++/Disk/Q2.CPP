#include<stdio.h>
#include<conio.h>
int insertQ(int queue[],int front,int rear)
{
if(rear>3)
	{
	printf("\n Queue over flow");
	}
else
	{
	printf("\n Enter Number To Be Insert In Queue:-");
	scanf("%d",&queue[++rear]);
	printf("\n One Data Insert In Queue");
	}
	return(rear);
}
void displayQ(int queue[],int front,int rear)
{
if(front==-1)
	{
	printf("\n Queue Under flow...");
	}
else
	{
		for(int i=front;i<=rear;i++)
	{
		printf("\n%d",queue[i]);
	}
	}
}
int delete(int queue[],int rear,int front)
{
	if(front==-1)
	{
		printf("\nqueue is under flow");
	}
	else
	{
		front=front+1;
		printf("\n one data delete");
	}
	return(front);
}
void main()
{
clrscr();
int rear=-1;
int front=-1;
int ch;
do
{
	printf("\n1.insert");
	printf("\n2.delete");
	printf("\n3.display");
	printf("\n4.exit");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		rear=insertQ(queue,front,rear);
		if(rear==0)
		front=0;
		getch();
		break;
		case 2:
		front=deleteQ(queue,front,rear);
		if(front==-1)
		rear=-1;
		getch();
		break;
		case 3:
		display(queue,front,rear);
		getch();
		break;
		default:
		printf("\n invalid number");
	}
}while(ch!=0);
getch();
}


