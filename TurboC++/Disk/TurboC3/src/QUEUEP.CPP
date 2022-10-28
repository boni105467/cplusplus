		 // queue program using pointer implementation //
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct queue
{
 int n;
 queue *next;
};
void insertq(struct queue **front,queue **rear,int a)
{
 struct queue *nw,*t;
 nw=(struct queue *)malloc(sizeof(queue));
 if(nw==NULL)
 {
  printf("\n memory not allocated");
 }
 else
 {
  nw->n=a;
  nw->next=NULL;
  if(*front==NULL)
  {
   (*front)=nw;
   (*rear)=nw;
  }
  else
  {
   (*rear)->next=nw;
   (*rear)=(*rear)->next;
  }
   printf("\n one node inserted in list");

 }
}

void deleteq(struct queue **front,struct queue **rear)
{
 struct queue *t;
 if(*front==NULL)
 {
  printf("\n queue under flow");
 }
 else
 {
  t=(*front);
  (*front)=(*front)->next;
  free(t);
 }
 if(*front==NULL)
 {
  (*rear)=NULL;

  printf("\n one node delete in queue");
 }
}

void dispq(struct queue *front)
{
 struct queue *t;
 if(front==NULL)
 {
  printf("\n queue under flow");
 }
 else
 {
  t=(front);
  while(t!=NULL)
  {
   printf("\n %d",t->n);
   t=t->next;
  }
 }
}

void main()
{
 clrscr();
 int ch,a;
 struct queue *front,*rear;
 front=NULL;
 rear=NULL;
 do
 {
   clrscr();
   printf("\n 1.insertq ");
   printf("\n 2.deleteq");
   printf("\n 3.dispq");
   printf("\n 0.exit");
   printf("\n enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
    printf("\n enter the number to be insert in queue");
    scanf("%d",&a);
    insertq(&front,&rear,a);
    getch();
    break;

    case 2:
    deleteq(&front,&rear);
    getch();
    break;

    case 3:
    dispq(front);
    getch();
    break;

    default:
    printf("\n invalind choice.....");
   }
 }while(ch!=0);
 getch();
}









