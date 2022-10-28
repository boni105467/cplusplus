#include<stdio.h>//circular double linklist//
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
		printf("\n1.insert_end\n2.insert_begin\n3.del_end");
		printf("\n4.del_begin\n5.del\n6.search\n7.display");
		printf("\n8.rev_display\n0.exit\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert_end();break;
			case 2:insert_begin();break;
			case 3:del_end();break;
			case 4:del_begin();break;
			case 5:del();break;
			case 6:search();break;
			case 7:display();break;
			case 8:rev_display();break;
			case 9:update();break;
			case 0:exit(0);
		}
		getch();
	}while(2);
}
void insert_end()
{
	node *t,*cur;
	t=(node *)malloc(sizeof(node));
	printf("\n enter a value");
	scanf("%d",&t->info);
	if(start==NULL)
	{
		start=t;
		t->RP=t;
		t->LP=t;
	}
	else
	{
		cur=start->LP;
		cur->RP=t;
		t->RP=start;
		t->LP=cur;
		start->LP=t;
	}
}
void insert_begin()
{
	node *t,*cur;
	t=(node *)malloc(sizeof(node));
	printf("\n enter a value");
	scanf("%d",&t->info);
	if(start==NULL)
	{
		start=t;
		t->RP=t;
		t->LP=t;
	}
	else
	{
		cur=start->LP;
		cur->RP=t;
		t->LP=cur;
		t->RP=start;
		start->LP=t;
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
	cur=start->LP;
	prev=cur->LP;
	if(prev==cur)
	{
		start=NULL;
	}
	else
	{
		prev->RP=start;
		start->LP=prev;
	}
	printf("\n deleted no=%d",cur->info);
	free(cur);
}
void del_begin()
{
	node *prev,*cur;
	if(start==NULL)
	{
		printf("\n list is empty");
		return;
	}
	cur=start;
	prev=cur->LP;
	start=cur->RP;
	if(prev==cur)
	{
		start=NULL;
	}
	else
	{
		prev->RP=start;
		start->LP=prev;
	}
	printf("\n deleted no=%d",cur->info);
	free(cur);
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
	printf("\n content \n");
	do
	{
		printf("%4d",cur->info);
		cur=cur->RP;
	}while(cur!=start);
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
	while(cur->RP!=start)
	{
		cur=cur->RP;
	}
	printf("\n content reversly \n");
	do
	{
		printf("%4d",cur->info);
		cur=cur->LP;
	}while(cur!=start->LP);
}
void update()
{
	node *cur;int x,f;
	if(start==NULL)
	{
		printf("\n list is empty");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	f=0;
	cur=start;
	do
	{
		if(cur->info==x)
		{
			f=1;
			break;
		}
		cur=cur->RP;
	}while(cur!=start);
	if(f==0)
	{
		printf("\n %d is not present",x);
	}
	else
	{
		printf("\n %d is present",x);
		printf("\n enter a new value");
		scanf("%d",&cur->info);
	}
}


void search()
{
	node *cur;int x,f;
	if(start==NULL)
	{
		printf("\n list is empty");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	f=0;
	cur=start;
	do
	{
		if(cur->info==x)
		{
			f=1;
			break;
		}
		cur=cur->RP;
	}while(cur!=start);
	if(f==0)
	{
	printf("\n %d is not present",x);
	}
	else
	{
	printf("\n %d is present",x);
	}
}
void del()
{
	node *prev,*cur,*next;int x,f;
	if(start==NULL)
	{
		printf("\n list is empty");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	f=0;
	prev=cur=start;
	do
	{
	if(cur->info==x)
	{
		f=1;
		break;
	}
	prev=cur;
	cur=cur->RP;
	}while (cur!=start);
	if(f==0)
	{
	printf("\n %d is not present",x);
	return;
	}
	next=cur->RP;
	if(prev==cur)
	{
	if(cur==next)
	{
	start=NULL;
	}
	else
	{
	start=next;
	start->LP=prev->LP;
	prev->LP->RP=next;
	}
	}
	else
	{
	prev->RP=next;
	next->LP=prev;
	}
	printf("\n deleted number=%d",cur->info);
	free(cur);
}









