//Typedef:it is used to naming for existing data types.
#include<stdio.h>
struct stud
{
    int a;
    char ch;
    double d;
};
   typedef struct stud student;//now struct stud become student
   typedef unsigned long int BIG;
   void main()
   {
      student s1;
      BIG b1; //data type of b1 variables is unsigned lont int
    }
