//display sum of digit of inputed num...
#include<stdio.h>
void main()
{
   int x, sum=0;
   clrscr();
   printf("\n enter an integer number:");
   scanf("%d",&x);
   while(x<0);
   {
    sum=sum+x%10;
    x=x/10;
   }
    printf("\n sum of number=%d", sum);
}