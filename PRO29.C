
//pyramid of ABC
#include<stdio.h>
#include<conio.h>
void main()
{
       int ch, ch1, space=1,x,y;
       clrscr();
       for(ch='A'; ch<='D'; ch++)
       printf("%c",ch);
       ch=ch-2;
       ch1=ch;
       for(;ch>='A'; ch--)
       printf("%c",ch);
       for(y=0; y<3; y++)
       {
	printf("\n");
	for(ch='A'; ch<=ch1; ch++)
	printf("%c",ch);
	for(x=0; x<space; x++)
	printf(" ");
	for(ch=ch1; ch>='A'; ch--)
	printf("%c",ch);
	ch1--;
	space=space+2;
	}
}