#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct list
{
  int n;
  list *next;
};

void main()
{
  list node, *nd;
  clrscr();
  printf("\n Sizeof list : %d", sizeof(list));
  printf("\n Size of node : %d", sizeof(node));
  printf("\n Size of nd : %d", sizeof(nd));
  getche();
  return;
}