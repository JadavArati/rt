//find wheter a number is prime number or NOT....
#include<stdio.h>
#include<conio.h>
void main()
{
    int flag=1,prime,x;
    clrscr();
    printf("\n enter integer number");
    scanf("%d",&prime);
    if(prime==1 || prime==2)flag=1;
    else if(prime%2==0)flag=0;
    else
    for(x=3; x<prime/2;x=x+2)
    {
     if(prime%x==0)
     {
      flag=0;
      break;
     }
    }
     if(flag)printf("/n number %d is  prime number",prime);
     else printf("\n number %d is NOT prime number",prime);
}