//using recursion write code to sum start value to end value....
#include<stdio.h>
long int sum (int,int);
void main(void)
{
   int start, end;
   long int total;
   printf("\n Enter starting value of the range....");
   scanf("%d",&start);
   printf("Enter ending value of the range....");
   scanf("%d",&end);
   total=sum(start,end);
   printf("\n total of %d to %d=%ld",start,end,total);
   }
   long int sum(int s,int e)
   {
    if(e>=5)
    return e+sum(s,e-1);
    else return 0;
    }