//getch,getche and getchar,ungetc
#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   printf("\n enter a character:");
   ch=getch();//read a character from KB not echoing.
   printf("%c",ch);
   printf("\n enter a character:");
   ch=getche();//read a character from KB and echoing.
   printf("%c",ch);
   printf("\n enter a character:");
   ch=getchar();//read a character from stream and echoing.
   printf("%c",ch);
   ch=getchar();
   printf("%c",ch);
   ungetc(ch,stdin);
  // ch=getchar();
   printf("%c",ch);
}
