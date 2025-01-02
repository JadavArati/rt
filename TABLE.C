//display table of x
#include<stdio.h>
void main()
{
   int counter=1,x;
   clrscr();
   printf("\n enetr number for table:");
   scanf("%d",&x);
   do
   {
   printf("%d*%d=%d\n",x,counter++,x*counter);
   }while(counter<11);
}