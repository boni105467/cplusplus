#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,x,ch,l,h,m,f;
	do
	{
	clrscr();
	printf("\n1.read\n2.print\n3.bubble");
	printf("\n4.selection\n5.insert\n6.insert one");
	printf("\n7.append\n8.sequencial search\n9.binary search");
	printf("\n10.update\n11.delate\n12.reverse\n0.exit");
	scanf("%d",&ch);
	switch(ch);
	{
	case 1:printf("\n How many number");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		printf("\n content of array \n");
		scanf("%d",&a[i]);
		}
	case 2:printf("\n content of array \n");
		for(i=0;i<n;i++)
		{
		printf("%4d",a[i]);
		}
		break;
	case 3:for(i=n-i;i>=1;i--)
		{
		for(j=0;j<i;j++)
		{
		if(a[i]>a[j+1])
		{
		x=a[j];
		a[j]=a[j+1];
		a[j+a]=x;
		}
		}
		}
		break;
	case 4:for(i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
		x=a[i];
		a[i]=a[j];
		a[j]=x;
		}
		}
		}
		break;
	case 5:for(i=1;i<=n;i++)
		{
		x=a[i];
		for(j=i;j>=0;j--)
		{
		if(a[j]>x)
		{
		a[j+1]=a[j]
		}
		else
		{
		break;
		}
		}
		a[j+1]=x;
		}
		break;
	case 6:printf("\n Enter a value ");
		scanf("%d",&x);
		for(j=n-i;j>=0;j--)
		{
		if(a[j]>x)
		{
		a[j+1]=a[j];
		}
		else
		{break;
		}
		}
		a[j+1]=x;
		n++;
		break;
	case 7:printf("\n Enter a value ");
		scanf("%d",&x);
		a[n]=x;
		n++;
		break;
	case 8:printf("\n Enter a value");
		scanf("%d",&x);
		f=0;
		for(i=0;i<n;i++)
		{
		if(a[i]==x)
		{f=1;
		break;
		}
		}
		if(f==0)
		{
		printf("\n %d is not present ",x);
		}
		else
		{
		printf("\n %d is present as position %d",x,i);
		}
		break;
	case 9:printf("Enter a value ");
		scanf("%d",&x);
		l=0;
		h=n-1;
		while(l<=h)
		{
		m=(l+h)/2;
		if(a[m]==x)
		{
		printf("\n %d is present of position %d",x,m);
		break;
		}
		else
		{
		if(x>a[m])
		{
		l=m+1;
		}
		else
		{
		h=m-1;
		}
		}
		}
		printf("\n present of position %d",x,m);
	case 10:printf("\n Enter a value");
		scanf("%d",&x);
		f=0;
		for(i=0;i<n;i++)
		{
		if(a[i]==x)
		f=1;
		{
		break;
		}
		}
		if(f==0)
		{
		printf("\n %d is not persent",x);
		}
		else
		{
		printf("\n %d is persent as position %d",x,i);
		printf("\n Enter a value ");
		scanf("%d",&a[i]);
		}
		break;
	case 12:printf("\n content reverse \n");
		for(i=n;i>0;i--)
		{
		printf("%4d",4[i]);
		}
		break;
	case 13:printf("\n Enter a value");
		scanf("%d",&x);
		f=0;
		for(i=0;i<n;i++)
		{
		if(a[i]==x)
		{
		f=1;
		break;
		}
		}
		if(f==0)
		{
		printf("\n %d is not persent ",x,s);
		}
	case 0:exit(0);
		}getch();
		}while(2);
}







