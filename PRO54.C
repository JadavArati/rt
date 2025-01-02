//find factorial of N number using recusion
#include<stdio.h>
long int fact (int n);
void main(void)
{
   int a;
   long int total;
   printf("\n Enter value:");
   scanf("%d",&a);
   total=fact(a);
   printf("factorial of %d is %ld",a,total);
  }
   long int fact(int n)
   {
     if(n==1)return 1;
     else return n*fact(n-1);
   }