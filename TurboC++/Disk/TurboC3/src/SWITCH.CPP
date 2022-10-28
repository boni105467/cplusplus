#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,l,b,a,p,c,d,g,s,n,i,j;
	do
	{
	clrscr();
	printf("\n1.area of paremeter of rectangle");
	scanf("\n2.find greatest,smallest of u");
	printf("\n3.pahara up to n");
	printf("\n0.exit \n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{

	case1:printf("\n enter value of l,b");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("\n are=%i\n perimeter=%i",a,p);
	break;
	caes2:printf("\n enter four no");
	      scanf("%d%d%d%d",&a,&b,&c,&d");
	      g=a>b&&a>c&&a>d?a:b>c&&b>d?b:c>d?c:d;

	      s=a<b&&a<c&&a<d?a:b<c&&b<d?b:c<d?c:d;
	      printf("\n greatest=%d\n smallest=%d",g,s);
	      brak;
       caes3:printf("\n Enter the value of n");
	      scanf("%d",&n);
	      printf("\n multiplication table");
	      for(i=1;i<=n;i++)
	      {
	      printf("\n table of %d",i);
	      for(j=1;j<=10;j++)
	      {
	      printf("\n %2dX%2d=%3d",i,j,i*j);
	      {
	      printf("\n press anykey to continue.....");
	      getch();
	      }
       case0:exit(0);
	     }
	     getch();
	     }while(2);
}

	      break;


