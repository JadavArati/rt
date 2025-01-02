//lopping statmant
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,c=1,ans;
    clrscr();
    ans=x*c;
    printf("%d * %d=%d",x,c,ans);
    c=c+1;
    do
    {
    printf("/n %d*%d,",x,c,ans);
    c=c+1;
    }while (c<22);
}

