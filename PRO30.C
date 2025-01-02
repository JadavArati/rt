//pyramid of fibonacci series....
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n=0,p=1,c=1;
   clrscr();
   for(i=1;i<6;i++)
   {
    for(j=1;j<=i; j++)
    {
      printf(" %d ",c);
      n=p+c;
      p=c;
      c=n;
    }
      printf(" \n ");
   }
}