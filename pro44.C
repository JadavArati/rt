#include<stdio.h>
union ABC
{
  char ch;
  int i;
  float f;
  double d;
}abd;//globle variable
void main()
{
  union ABC a1;//local to main function
  clrscr();
  a1.d=0.0;
  printf("\n size of union ABC=%d",sizeof(a1));
  a1.ch='a';
  printf("\n single character %c ",a1.ch);
  a1.i=100;
  printf("\n integer value %d",a1.i);
  a1.f=199.190;
  printf("\n double value %f",a1.f);
  printf("\n integer value %d",a1.i);
  printf("\n character value %c",a1.ch);
}