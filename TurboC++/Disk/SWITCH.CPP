#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("\n1BCA.\n2.BSCIT\n3.MCA\4.MSCIT\5.MBA");
printf("Enter your choice");
scanf("%d",&x);
switch(x)
{
	case 1:printf("BCA");
		break;
	case 2:printf("BSCIT");
		break;
	case 3:printf("MCA");
		break;
	case 4:printf("MSCIT");
		break;
	case 5:printf("MBA");
		break;
}
	Default:printf("\n invalid choice");
	getch();
	}
