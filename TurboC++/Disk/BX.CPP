#include<stdio.h>
#include<conio.h>
void main()
{
	int a [20][20],b [20]20 ,c [20][20];
	int ar,br,bc,ch,,j,k;
	do
	{
	clrscr();
	printf("\n1.read\n2.print\n3.add\n4.substract");
	printf("\n5.product\n0.exit\n entr your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("\n enter row,col of a");
		scanf("%d%d",&ar,&ac);
		for(i=0;i<ar;i++)
		{
		for(j=0;j<ac;j++)
			{
			printf("\n enter a value");
			scanf("%d",&a[i][j]);
			}
		}
		printf("\n enter row,col of b");
		scanf("%d%d",&br,&bc);
		for(i=0;i<br;i++)
		{
		j=0;j<b;j++)
			{
			printf("\n Enter a value");
			scanf("%d",&b[i][j]);
		}
		break;
	case 2:printf("\n content of a \n");
		for(i=0;i<ar;i++)
		{
		for(j=0;j<ac;j++)
			{
			printf("%4d",a[i][j]);
			}
			printf("\n");
		}
		printf("\n content of b \n");
		for((i=0;i<br;i++)
		{
		for(j=0;j<bc;j++)
			{
			printf("(%4d",b[i][j]);
			}
			printf("\n");
		}
		break;
	case 4:if(ar==br&&ac==bc)
		{
		for(i=0;i<ar;i++)
			{
			for(j=0;j<ac;j++);
				{
				foc[i][j]+b[i][j];
				}
			}
			printf("\n sum matrix \n");
			for(i=0;i<ar;i++)
			{
			for(j=0;j<ac;j++)
			{
			printf("%4d",c[i][j]);
			}
			printf("\n");
		}

		else
		{
		printf("\n matrix addition not possible");
		}
		break;
	case 4:if(ar==br&& ac==bc)
		printf("\n content of Difference matrix \n");
		{
		for(i=0;i<ar;i++)
			{
			for(j=0;j<ac;j++)
				{
				c[i][j]=a[i][j]-b[i][j];
				printf("%4d",4d",c[i][j]);
				}
				printf("\n");
			}
			else
			{
			printf("\n substraction not possible ");
			}
			break;
		case 5:if(ac==br)
			{
			for(i=0;i<ar;i++)
				{
				for(j=0;j<bc;j++)
					{
					c[i][j]=0;
					for(k=0;k<ac;k++)
					{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
					}
					}
				}
				printf("\n product matrix \n");
				for(i=0;i<ar;i++)
					{
					for(j=0;j<bc;j++)
						{
						printf("%4d",c[i][j]);
						}
						printf("\n");
					}
				}
				else
				{
				printf("\n matrix multiplication not possible");
				}
				break;
			case 0;exit(0);
				}
				getch();
				}while(2)
				}







