//two dimensional string array and array of pointers.
#include<stdio.h>
#include<string.h>
#include<alloc.h>
void main()
{
   char*str[5];//array of pointer
   char data[100];
    int i;
   clrscr();
   for(i=0; i<5; i++)
    {
       printf("enter data:");
       gets(data);
       str[i]=(char*)malloc(strlen(data)+1);
       //allocateone more bytes for'\0'character strcpy(str[i],data);
    }
      for(i=0; i<5; i++)
      printf("\n string %d is %s",i+1,str[i]);

}

