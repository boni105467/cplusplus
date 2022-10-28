#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int n,i,j;
	int gd,DETECT,gm;
	printf("how many line");
	scanf("%d",&n);
	initgraph ( &gd,&gm," ");
	clearviewport();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||j==n||i==j||i+j==n+1)
		{	setcolor(random(16)+1);
			outtextxy(j,i,"*");
			delay(11);
		 }
		 }
		 getch();
	 }