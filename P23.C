//ctpe.h header file function
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     for(i=0; i<127; i++)
     {
       printf("\n==========for i=%d==========",i);
       if(isalnum(i))
	 printf("\n %c is alphanumeric",i);
       if(isalpha(i))
	 printf("\n %c is alphabate",i);
       if(isascii(i))
	 printf("\n %c is asciin character",i);
       if(iscntrl(i))
	 printf("\n %d is control character",i);
       if(isdigit(i))
	 printf("\n %c is a digit",i);
       if(isgraph(i))
	 printf("\n %c is printing character",i);
       if(islower(i))
	 printf("\n %c is lower character",i);
       if(isprint(i))
	 printf("\n %c is printing character",i);
       if(ispunct(i))
	 printf("\n %c is punctuation character",i);
       if(isspace(i))
	 printf("\n %d is space character",i);
       if(isupper(i))
	 printf("\n %c is upper character",i);
       if(isxdigit(i))
	 printf("\n %c is hexadecinal character",i);
	 printf("\n--press any key to continue--");
	 getch();
	}
}