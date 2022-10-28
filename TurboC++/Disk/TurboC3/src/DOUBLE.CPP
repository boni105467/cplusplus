#include<stdio.h>//write a program the following opration on double linklist//
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
{
	int info;
	node *LP;
	node *RP;
};
node *start=NULL;
void insert_end();
void insert_begin();
void del_end();
void del_begin();
void del();
void search();
void update();
void display();
void rev_display();
void main()
{
	int ch;
	do
	{
		clrscr();
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:insert_end();break;
		case 2:insert_begin();break;
		case 3:del_end();break;
		case 4:del_begin();break;
		case 5:del();break;
		case 6:search();break;
		case 7:update();break;
		case 8:display();break;
		case 9:rev_display();break;
		case 0:exit(0);
		}getch();
	}while(2);
}
void insert_end()
{
	node *t,*cur;
	//t=new node;
      t=(node *)malloc(sizeof(node));
      printf("\n enter a value");
      scanf("%d",&t->info);
      t->RP=NULL;
      if(start==NULL)
      {
      t->LP=NULL;
      start=t;
      return;
      }
      cur=start;
      while(cur->RP!=NULL)
      {
      cur=cur->RP;
      }
      cur->RP=t;
      t->LP=cur;
}
void insert_begin()
{
	node *t;
	t=(node *)malloc(sizeof(node));
	printf("\n enter a value");
	scanf("%d ",&t->info);
	if(start==NULL)
	{
	t->LP=t->RP=NULL;
	start->LP=t;
	t->LP=NULL;
	start=t;
	}
}
void del_end()
{
	node *prev,*cur;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	prev=cur=start;
	while(cur->RP!=NULL)
	{
	prev=cur;
	cur=cur->RP;
	}
	if(prev==cur)
	{
	start=NULL;
	}
	else
	{
	prev->RP=NULL;
	}
	printf("\n deleted no=%d",cur->info);
	free(cur);
}
void del_begin()
{
	node *cur;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	cur=start;
	start=cur->RP;
	if(start!=NULL)
	{
	start->LP=NULL;
	}
	printf("\n deleted no=%d",cur->info);
	free(cur);
}
void del()
{
	node *prev, *cur,*next;
	int x;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	printf("\n enter a no");
	scanf("%d",&x);
	prev=cur=start;
	while(cur!=NULL)
	{
	if(cur->info==x)
	{
	break;
	}
	prev=cur;
	cur=cur->RP;
	}
	if(cur==NULL)
	{
	printf("\n %d is not preset");
	return;
	}
	next=cur->RP;
	if(prev==cur)
	{
	start=next;
	if(next!=NULL)
	{
	next->LP=NULL;
	}
	}
	else
	{
	prev->RP=NULL;
	if(next!=NULL)
	{
	next->LP=prev;
	}
	}
	printf("\n deleted no=%d",cur->info);
	free(cur);
}
void search()
{
	node *cur;
	int x;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	printf("\n enetr a no");
	scanf("%d",&x);
	cur=start;
	while(cur!=NULL)
	{
	if(cur->info==x)
	{
	break;
	}
	cur=cur->RP;
	}
	if(cur==NULL)
	{
	printf("\n %d is not preset",x);
	return;
	}
	printf("\n searched no =%d",cur->info);
}
void update()
{
	node *cur;
	int x;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	printf("\n enter a no");
	scanf("%d",&x);
	cur=start;
	while(cur!=NULL)
	{
	if(cur->info==x)
	{
	break;
	}
	cur=cur->RP;
	}
	if(cur==NULL)
	{
	printf("%d is not preset",x);
	return;
	}
	printf("\n updated no=%d",cur->info);
	printf("\n enter a new value");
	scanf("%d",&cur->info);
}
void rev_display()
{
	node *cur;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	cur=start;
	while(cur->RP!=NULL)
	{
	cur=cur->RP;
	}
	printf("\n content reversly \n");
	while(cur!=NULL)
	{
	printf("%4d",cur->info);
	cur=cur->LP;
	}
}
void display()
{
	node *cur;
	if(start==NULL)
	{
	printf("\n list is empty");
	return;
	}
	cur=start;
	while(cur!=NULL)
	{
	printf("%4d",cur->info);
	cur=cur->RP;
	}
}



















