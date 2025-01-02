//reverce number 123=321,320=23
#include<stdio.h>
void main()
{
      long int num,x=0,y,unit=1;
      printf("\nenter number:");
      scanf("%d",&num);
      y=num;
      while(y>0)
      {
	  x=x*unit+y%10;
	  unit=10;
	  y=y/10;
      }
	  printf("\n reverce number is %d",x);
       
}