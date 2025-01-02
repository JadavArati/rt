#include<stdio.h>
void main()
{
    int c,sum=0;
    printf("\n enter an integer number:");
    scanf("%d",&c);
    while(c>0)
    {
       sum=sum+c%10;

    }
    printf("\n sum of number=%d",sum);
}