//pascar table
#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j,k,m;
     clrscr();
      for(i=1; i<10; i++)
      {
       for(k=10; k>i; k--)
       printf(" ");
       j=m=i/2;
       if(i%2!=0)
       j=j+1;
       for(k=1; k<=j; k++)
       {
	printf(" %d ",k);
       }

	 for(;m>=1; m--)
	 {
	 printf(" %d ",m);
	 }
	 printf("\n");
	 }
}