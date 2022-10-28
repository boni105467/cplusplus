#include<stdio.h>//wap to following operation on linklist using header node//
#include<conio.h>
#include<process.h>
#include<alloc.h>
struct node
{
	int info;
	node *next;
};
struct SD
{
	int tn,dn,in,un;
};
struct Hnode
{
	SD info;
	node *next;
};
Hnode H;
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
	H.next=NULL;
	H.info.tn=H.info.dn=H.info.in=H.info.un=0;
	do
	{
		clrscr();
		printf("\n1.insert_end\n2.insert_begin");
		printf("\n3.del_end\n4.del_begin");
		printf("\n5.del\n6.search\n7.display\n8.rev_display");
		printf("\n9.update\n0.exit\nenter your choice");
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
		}
		getch();
	}while(2);
}
void insert_end()
{
	node *t, *cur;
	t=(node *)malloc(sizeof(node));
	printf("\n enter a value");
	scanf("%d",&t->info);
	t->next=NULL;
	if(H.next==NULL)
	{
		H.next=t;
	}
	else
	{
		cur=H.next;
		while(cur->next!=NULL)
		{
			cur->next=t;
		}
		cur->next=t;
	}
}
void insert_begin()
{
	node *t;
	t=(node*)malloc(sizeof(node));
	printf("\n enter a value");
	scanf("%d",&t->info);
	t->next=H.next;
	H.next=t;
	H.info.tn++;
	H.info.in++;
}
void del_end()
{
	node *cur,*prev;
	if(H.next==NULL)
	{
		printf("\n empty list");
		return;
	}
	prev=cur=H.next;
	while(cur->next!=NULL)
	{
		prev=cur;
		cur=cur->next;
	}
	if(prev==cur)
	{
		H.next=NULL;
	}
	else
	{
	prev->next=NULL;
	}
	H.info.dn++;
	H.info.tn--;
	printf("\n deleted no=%d",cur->info);
	free(cur);
}
void del_begin()
{
	node *cur;
	if(H.next==NULL)
	{
		printf("\n empty list");
		return;
	}
	cur=H.next;
	H.next=cur->next;
	H.info.tn--;
	printf("\n deleted no=%d",cur->info);
	free(cur);
}
void del()
{
	int x;
	node *cur,*prev,next;
	if(H.next==NULL)
	{
	printf("\n empty list");
	return;
	}
	printf("\n enter a vlalue");
	scanf("%d",&x);
	prev=cur=H.next;
	while(cur!=NULL)
	{
	if(cur->info==x)
	{
	break;
	}
	prev=cur;
	cur=cur->next;
	}
}
void search()
{
	int x;
	node *cur;
	if(H.next==NULL)
	{
		printf("\n empty list");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	cur=H.next;
	while(cur!=NULL)
	{
		if(cur->info==x)
		{
			break;
		}
		cur=cur->next;
	}
	if(cur==NULL)
	{
	printf("\n %d is not present",x);
	return;
	}
	printf("\n searched no=%d",cur->info);
}
void update()
{
	int x;
	node *cur;
	if(H.next==NULL)
	{
		printf("\n empty list");
		return;
	}
	printf("\n enter a value");
	scanf("%d",&x);
	cur=H.next;
	while(cur!=NULL)
	{
		if(cur->info=x)

		{
			break;
		}
		cur=cur->next;
	}
	if(cur==NULL)
	{
	printf("\n %d is not present",x);
	return;
	}
	printf("\n update no=%d",cur->info);
	printf("\n enter a new number");
	scanf("%d",&cur->info);
	H.info.un++;
}





