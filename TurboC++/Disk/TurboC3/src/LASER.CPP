#include<stdio.h>
#include<conio.h>
void read (int[],int);
void print(int[],int);
void sort(int[],int);
void partion(int[],int,int);
void Quick(int[],int);
void createheap(int[],int);
void heapsort(int[],int);
void main()
{
	int a[100],b[100];
	int n,an,bn,ch;
	do
	{
		printf("\n1.read\n2.print\n3.sort\n4.partion");
		printf("\n5.Quick\n6.createheap\n7.heapsort");
		printf("\n0.Exit");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("\n how many no");
		scanf("%d",&ch);
		read(a,n);
		break;
		case 2:printf(a,n);break;
		case 3:Quick(a,o,n-1);
		break;
		case 4:createheap(a,n);
			heapsort(a,n);
			break;
		case 5:partion(a,n,b);
			bn=n/2;
			an=n-bn;
			sort(a,an)
			sort(b,bn);
			merge(a,an,b,bn);
			break;
		case 0:Exit(0);
		}
		getch();
		}while(2);
	}
	void read(int a[],int n)
	{
		int i;
		 for(i=0;i<n;i++)
		 {
			printf("\n Enter a value");
			scanf("%d",&a[i]);
		 }
	}
	void print(int a[],int n)
	{
		int i;
		printf("\n content \n");
		for(i=0;i<n;i++)
		{
		printf("%4d",a[i]);
		}
	}
	void sort(int a[],int n)
	{
		int i,j,x;
		for(i=0;i<n-1;i++)
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
	}
	void partion(int a[],int n,int b[])
	{
		int i,j;
		i=n%2=0 n/2:n/2+1;
		for(j=0;i<n;i++,j++)
		{
		b[j]=a[i];
		}
	}
	void merge(int a[],int an,int b[],int bn)
	{
		int a[200],i,j,k;
		i=j=k=0;
		while(i<an && j<bn)
		{
			if(a[i]<b[j])
			{
			c[k++]=a[i++];
			}
			else
			{
			c[k++]=b[j++];
			}
		}
		while(i<an)
		{
			c[k++]=a[i++];
		}
		while(j<bn)
		{
		c[k++]=b[j++];
		}
		printf(c,an+bn);
	}
	void Quick(int a[],int low,int high)
	{
		int l,h,pivot,x;
		l=low;
		h=high;
		pivot=a[(l+h)/2];
		while(l<=h)
		{
			while(a[l]<pivot)
			{
			i++;
			}
			while(a[h]>pivot)
			{
			h--;
			}
			if(l<=h)
			{
			x=a[l];
			a[l]=a[h];
			a[h]=x;
			l++;h--;
			}
		}
		if(h>low)
		Quick(a,low,h);
		if(l<high)
		Quick(a,l,high)
	}
	void createheap(int a[],int n)
	{
		int i,v,s,f;
		for(i=1;i<n;i++)
		{
			v=a[i];
			s=i;
			f=(s-i)/2;
			while(s>0 && a[f]<v)
			{
			a[s]=a[f];
			s=f;
			f=(s-1)/2;
			}
			a[s]=v;
		}
	}
	void heapsort(int a[],int n)
	{
		int i,x;
		for(i=n-1;i>=1;i--)
		{
		x=a[0];
		a[0]=a[i];
		a[i]=x;
		createheap(a,i);
		}
	}














			{
			while(a[i]<pivot)
			{

