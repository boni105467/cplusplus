#include<stdio.h>
#include<conio.h>//no return tupe with argument
void insertQ(int Queue[],int*front,int*rear)
{
if(*rear>3)
	{
	printf("\n Queue over flow...");
	}
else
	{
	if(front==-1)
		{
		*front=*front+1;
		*rear=*rear+1;
		}
	else
		{
		*rear=*rear+1;
		}
	printf("\n Enter Number To Be Insert In Queue:-");
	scanf("%d",&queue[*rear]);
	printf("\n One Data Insert In Queue");
	}
}
void displayQ(int queue[],int front,int rear)
{
if(front==-1)
	{
	printf("\n Queue Under Flow...");
	}
else
	{
	for(int i=front;i<=rear;i++)
		{
		printf


