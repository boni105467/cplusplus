#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g;
printf("\n Enter the first integr number:");
scanf("%d",&a);
printf("\n Enter the second integr number:");
scanf("%d",&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("\n sum of the numbers=%d",c);
printf("\n subtraction of the number=%d",d);
printf("\n multiplication of the number=%d",e);
printf("\n Divison of the number%d",f);
printf("\n remainder of the number=%d",g);
getch();
}