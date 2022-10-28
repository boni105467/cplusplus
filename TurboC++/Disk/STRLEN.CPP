#include<stdio.h>
#include<conio.h>
int length(char*);
void main()
{
clrscr();
char nm[30];
int l;
printf("\n Enter the name");
gets(nm);
printf("Name=%s",nm);
l=length(nm);
printf("\t length=%d",l);
getch();
}
int length(char *n)
{
int c=0;
while(*n!='\0')
{
c++;
n++;
}
return (c);
}