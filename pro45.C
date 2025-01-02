//Enumeration:enum(user defined data type)
#include<stdio.h>
enum mar_status
{
   single=1,married,divorcee=4,widow=8
   //enumerators
};
void main()
{
enum mar_status per1,per2;
clrscr();
printf("\n size of enumeration is:%d",sizeof(per1));
printf("\n values of single: %d",single);
printf("\n values of married: %d",married);
printf("\n values of divorcee:%d",divorcee);
printf("\n values of widow:%d",widow);
per1=single;
printf("\n value of per1: %d",per1);
}