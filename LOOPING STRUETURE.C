//looping strueture
#include<stdio.h>
void main()
{
    int c=1;
    top:
    printf("%d  ",c);
    c=c+1;
    if(c<11) goto top;
}