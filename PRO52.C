//recursive function display 1 to 10
#include<stdio.h>
void disp(int);
void main(void)
{
 disp(10);
}
 void disp(int a)
{
   if (a>0)
   printf(" %d ",a);
   else return;
   disp(a-1);
 }