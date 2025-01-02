//write a code to find square,cube and square root...
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	 int i;
	 clrscr();
	 printf("\n------------------------------------------------------\n");
	 printf("value\t square\t\t cube\t\t square root\n");
	 for(i=1; i<11; i++)
	 printf("\n %d\t %f\t %lf\t %lf",i,pow(i,2),pow(i,3));
	 printf("\n======================================================\n");
}