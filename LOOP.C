#include<stdio.h>
#include<conio.h>
void main()
{
   int c=1,x;
   clrscr();
   printf("\n enter number for table:");
   scanf("%d ",&x);
   do{
	printf("%d  %d+%d\n", x,c);
     }while(c<11);
}