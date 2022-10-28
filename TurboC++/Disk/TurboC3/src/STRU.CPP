		   // student record //
#include<stdio.h>
#include<conio.h>
struct student
{
char nm[40];
int age;
int roll;
char session[10];
char add[40];
char con[15];
};
void main()
{
clrscr();
struct student s1;
textcolor(11);
cprintf("Enter the name");printf("\n");
fflush(stdin);
gets(s1.nm);
textcolor(12);
cprintf("Enter the age");printf("\n");
scanf("%d",&s1.age);
textcolor(4);
cprintf("enter the roll");printf("\n");
scanf("%d",s1.roll);
textcolor(9);
cprintf("Enter the session");printf("\n");
fflush(stdin);
gets(s1.session);
textcolor(6);
cprintf("Enter the address");printf("\n");
fflush(stdin);
gets(s1.add);
textcolor(14);
cprintf("Enter the contact number");printf("\n");
fflush(stdin);
gets(s1.con);
textcolor(15);
cprintf("name=%s",s1.nm);printf("\n");
textcolor(9);
cprintf("age=%d",s1.age);printf("\n");
textcolor(2);
cprintf("roll=%d",s1.roll);printf("\n");
textcolor(5);
cprintf("session=%s",s1.session);printf("\n");
textcolor(11);
cprintf("address=%s",s1.add);printf("\n");
textcolor(12);
cprintf("contact number=%s",s1.con);printf("\n");
getch();
}

