//lopping statmant
#include<stdio.h>
void main()
{
    int  counter=1;
    top:
    printf("%d ",counter);
    counter++;
    if(counter<11) goto top;
}

