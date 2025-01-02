//use of ceiling and floor function
#include<stdio.h>
#include<math.h>
void main()
{
   double d=123.456,up,down;
   clrscr();
   printf("\n orignal number is %lf",d);
   scanf("up,down");
   up=ceil(d);
   printf("\n rounding up of number %lf is %if",d,up);
   down=floor(d);
   printf("\n round down of number %lf is %lf",d,down);
}