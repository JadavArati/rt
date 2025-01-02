// sum of 1 to 10
#include<stdio.h>
void main()
{

   long int sum=0,c=1;
   clrscr();
   while(c<11)
   {
    sum=sum+c;
    c++;
   }
    printf("\n sum of 1 to 10 is %d", sum);
}