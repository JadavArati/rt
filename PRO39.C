//using malloc function,allocate a memory block.....
//dynamic one demension array...
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void main()
{
   double*ptr;
   int a;
   ptr=(double*)malloc(sizeof(double)*10);
   printf("\n address of new new memory block is %c",ptr);
   for(a=0; a<10; a++)
   {
     printf("enter value");
     scanf("%lf",ptr[a]);
     //scanf("%lf",(ptr+a));
   }
    for(a=0; a<10; a++)
    {
     printf("\n value at %d is %lf",a,ptr[a]);
     //printf("\n value at %d is %lf",a,*(ptr0+a));
   }
}