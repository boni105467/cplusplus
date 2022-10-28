#include<stdio.h>
#include<conio.h>
void figcir(int,int);
void figcir(int a,int b)
{
	int i,x,y,r,r
	int gd=DETECT,gm;
	initgraph(&gd,gm," " );
	clearviewport();
	for(i=0;i<=360;i++)
	{
	x=320+a*cos(3.14*i/180);
	y=240+b*sin(3.14*i/180);
	setcolor (random(16));
	outtextxy(x,y,"*");
	x=320+b*sin(3.14*i/180);
	outtextxy(x,y"*");
	x=320+r*cos(3.14*i/180);
	y=240+r*sin(3.14*i/180);
	outtextxy(x,y"*");
	x=320+r1*cos(3.14*i/180);
	y=240+r1*sin(3.14*i/180);
	outtextxy(x,y"*");
	}
	void main()
	{
	int a,b;
	printf("\n Enter a,b");
	scanf("%d%d",&a,&b);
	figcir(a,b);
	getch();
	}
