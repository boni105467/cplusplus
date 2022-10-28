#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float km,m,feet,inch,cm;
	printf("\n Enter the distance b/w 2 cities(in km)");
	scanf("%f",&km);
	m=km*1000; //1km=1000 m;
	feet=km*3280.84; // 1km=3280.84 feet;
	inch=km*39370.1; // 1km=39370.1 inch;
	cm=km*100000; // 1km=10000 cm;
	printf("\n distance b/w two  cities km %f",km);
	printf("\n distance b/w two cities m=%f",m);
	printf("\n distance b/w two cities feet%f",feet);
	printf("\n distance b/w two cities inch%f",inch);
	printf("\n distance b\w two cities cm %f",cm);
	getch();
}
