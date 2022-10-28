#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;
void push()
{
int n;
if (top<5-1)
{
printf("\n Enter number to be push in stack:-");
scanf("%d",&n);
stack[++top]=n;
printf("\n one data push in stack....");
}
else
{
printf("\n stackover flow....");
}
}
void pop()
{
if (top==-1)
{
printf("\n one data poped....");
}
}

void peep()
{
if(top==-1)
{
printf("\n stack under flow....");
}
else
{
for(int i=top;i>=0;i--)
printf("\n %d",stack[i]);
}
}
void main()
{
clrscr();
int ch;
do
{
clrscr();
printf("\n1.push");
printf("\n2.pop");
printf("\n3.peep");
printf("\n4.EXIT");
printf("\n Enter your choice:-");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
getch();
break;
case 2:
pop();
getch();
break;
case 3:
peep();
getch();
break;
default:
printf("invalid choice...");
}
}while(ch!=0);
getch();
}
