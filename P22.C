//armstrong number in between 100 to 1000
#include<stdio.h>
void main()
{
   int num,c,digit,sum=0;
   for(c=100; c<1000; c++)
   {
     num=c;
     while(num>0)
     {
     digit=num%10;
     sum=sum+digit*digit*digit;
     num=num/10;
     }
     if(c==sum)
     printf("\n number %d is armstrong number",c);
     sum=0;
     }
}