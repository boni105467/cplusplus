#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<ctype.h>

typedef struct list
{
 int info;
 list *next;
};

void menu()
{
  printf("\n \t\t Main Menu");
  printf("\n\t 1. Create List");
  printf("\n\t 2. Traverse List");
  printf("\n\t 3. Insert Node");
  printf("\n\t 4. Delete Node");
  printf("\n\t 5. Search Node ");
  printf("\n\t 6. Exit");
}

void ins_menu()
{
  printf("\n\t\t Insert Menu");
  printf("\n\t 1. Insert as First Node");
  printf("\n\t 2. Insert as Last Node");
  printf("\n\t 3. Insert at dessired positon");
  printf("\n\t 4. Exit");
}

void del_menu()
{
  printf("\n\t Delete Menu");
  printf("\n\t 1. Delete First Node");
  printf("\n\t 2. Delete last Node");
  printf("\n\t 3. Delete from desired postion");
  printf("\n\t 4. Exit");
}

list *clist(list *start, int *pcnt)
{
  char ch;
  list *node;
  node=(list *)malloc(sizeof(list));
  start=node;
  do
  {
    ++*pcnt;
    printf("\n Enter Information part :");
    scanf("%d", &node->info);
    fflush(stdin);
    node->next='\0';
    printf("\n Do You want to create more nodes(Y/N):");
    scanf("%c", &ch);
    fflush(stdin);
    if(toupper(ch)=='Y')
    {
      node->next=(list *)malloc(sizeof(list));
      node=node->next;
      continue;
    }
    else
     break;
  }while(toupper(ch)=='Y');
  return(start);
}

void trav(list *start)
{
  if(start==NULL)
  {
    printf("\n List not created ... Try Again");
    getche();
  }
  else
  {
   list *node;
   node=start;
   while(node!='\0')
   {
     printf("\n Address : %u \t info : %d \t nextnode address : %u", node, node->info, node->next);
     node=node->next;
   }
  }
  return;
}

void main()
{
  list *start=NULL;
  int cnt=0, ch1, ch2;

  do
  {
    do
    {
	clrscr();
	menu();
	scanf("%d", &ch1);
	if((ch1<1)||(ch1>6))
	{
	  printf("\n Invalid Choice .... Try again");
	  getche();
	  continue;
	}
	break;
    }while(1);

    switch(ch1)
    {
     case 1:
	start=clist(start, &cnt);
	break;
     case 2:
	trav(start);
	getche();
	break;
    }
  }while(ch1<6);
}

/*
void insertlast(slist **start, int a)
{
 slist *nw,*t;
 nw=(slist *)malloc(sizeof(slist));
 nw->n=a;
 nw->next=NULL;
 if(*start==NULL)
 {
  *start=nw;
 }
 else
 {
  t=*start;
  while(t->next!=NULL)
  {
   t->next;
  }
  t->next=nw;
 }
 printf("\n one node insert in last....");
}

 void insertnodefirst(slist **start,int a)
 {
  slist *nw;
  nw=(slist *)malloc(sizeof(slist));
  nw->n=a;
  nw->next=*start;
  *start=nw;
  printf("\n one node insert in first");
 }

 void display(slist *start)
 {
  slist *t;
  if(start==NULL)
  {
   printf("list is empty");
  }
  else
  {
   t=start;
   while(t!=NULL)
   {
    printf("%d",t->n);
    t=t->next;
   }
  }
 }

 void search(slist *start,int s)
 {
  int f=0;
  slist *t;
  if(start==NULL)
  {
   printf("\n node is empty...");
  }
  else
  {
   t=start;
   while(t!=NULL)
   {
    if(t->n==s)
    {
     f=1;
     break;
    }
    t=t->next;
   }
  }
 }
 if(f==0)
 {
  printf("\n not found....");
 }
 else
 {
  printf("\n data is found");
 }
}

 void modify(slist *start,int s)
 {
  int f=0;
  slist *t;
  if(start==NULL)
  {
   printf("\n list is empty....");
  }
  else
  {
   t=start;
   while(t!=NULL)
   {
    if(t->n==s)
    {
     f=1;
     break;
    }
    t=t->next;
   }
   if(f==0)
   {
    printf("\n not found...");
   }
   else
   {
    printf("\n enter number to be modify");
    scanf("%d",&t->n);
    printf("\n modify succes fully....");
   }
  }
 }
  */







