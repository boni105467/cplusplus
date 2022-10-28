#include<stdio.h>
#include<conio.h>
void SDR(int);
void pahara(int);
void prime(int,int);
void perfect(int,int);
void SDR(int n)
{
int s=0,p=1,r=0,r
while (n>0)
{
r=n%10;
s=s+r;
p=p*r;
r=r*10+r;
n=n%10;
}
printf("\n sum=%d\n product=%d\n reverse=%d)
void pahara (int n)
{
int i,j;
printf("\n\t multiplication Table",i);
for(i=1;i<=n;i++)
{
printf("\n Table of %d",i);
for(j=1;j<=10;j++)
{
printf("\n %2d*%2d=%3d",i,s,i*j);
}
printf("\n press any key to null....");
getch();
}
}
void prime (int m,int n)
{
int i,j,f,c=0;
printf("\n list of prime \n");
for(i=m;i<=n;i++)
{
f=1;
for(j=2;j<=int(sqrt(i));j++)
{
if(i%j==0)
{
f=0;
break;
}
}
if(f==1)
{
printf("%4d",i);
c++;
}
}
printf("\n Total prime=%d",c);
}
void perfect(int m,int n)
{
int i,j,s,c=0;
printf("\n list of perfect no s\n");
for(i=m;i<=n;i++)
{
s=0;
for(j=1;j<=i/2;j++)
{
if(i%j==0)
{
s=s+j;
}
}
if(s==i)
{
printf("%4d",i);
c++;
}
}
printf("\n Total perfect=%d",c);
}
void main()
{
int m,nch;
do
{
clrscr();
printf("\n1.SPR\n2.pahara\n3.prime\n4.perfect\n0.exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter a no");
	scanf("%d",&n);
	SPR(n);
	break;
case 2:printf("\n Enter value of n");
	scanf("%d",&n);
	pahara(n);
	break;
case 3:printf("\n Enter range");
	scanf("%d",&m,&n);
	prime(m,n);
	break;
case 4:printf("\n Enter rang");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
	x=m;
	m=n;
	n=x;
	}
	printf(m,n);
	break;
	case 0:exit(0);
	}
	getch();
	}while(2);
	}


