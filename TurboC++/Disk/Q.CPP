#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct Queue //insert delete traverse q using pointer
{
	int n;
	Queue *next;
};
void insertQ(*front,*rear,int a)
{
	Queue *nw;
	nw=(Queue *)malloc(sizeof(Queue));
	if(nw==NULL)
	{
		printf("memory is not allocated");
	}
	else
	{
		nw->n=a;
		nw->next=NULL;
		if(*front=NULL)
		{
		*front=*rear=nw;
		}
		else
		{
		*rear->next=nw;
		*rear=nw;
		printf("one node insert in Queue");
		}
	}

}
void delete Q(Queue **front,Queue **rear)
{
	if(*front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		t=*front;
		*front=t->next;
		free(t);
		if(*front==NULL)
		*rear=NULL;
		printf("one node deleted");
	}
}
void displayQ(**front)
{
	Queue *t;
	if(front==NULL)
	{
		printf("Queue is Empty");
	}
	else
	{
		t=front;
		while(t!NULL)
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
	Queue *front=NULL;
	do
	{
	clrscr();
	printf("\n1.insert");
	printf("\n2.delete");
	printf("\n3.Display");
	printf("\n0.Exit");
	printf("\n Enter your choice");
	scanf("%d",&ch);
	{
		case 1:printf("\n Enter number to be insert in Q");
			scanf("%d",&a);
			insert(&front,&rear,a);
			getch();
			break;
		case 2:printf("\n Enter the number to be deleted in Queue");
			scanf("%d",&a);
			delete Q(&front,&rear,a);
			getch();
			break;
		case 3:Display(front)
			getch();
			break;
		default:printf("\n invalid choice...");
	}
	}while(ch!=0);
	getch();
}


