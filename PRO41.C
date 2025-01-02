//using realloc function\ shrink/grow a memory block
//dynamic one dimension array
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
void main()
{
  int*ptr;
  int a;
  ptr=(int*)
  calloc(10,sizeof(int));
  printf("\n address of new memory block is %x\n",ptr);
  for(a=0; a<10; a++)
  {
    printf(" enter value:");
    scanf("%lf",(ptr[a]));
    //scanf("%lf",(ptr,a));
  }
   for(a=0; a<10; a++)
   {
      printf("\n value at %d is %d",a,ptr[a]);
      //printf("\n value at %d is %lf", a,*(ptr+a))
   }
    ptr=(int*)realloc(ptr,15*sizeof(int));
    for(a=10; a<15; a++)
    {
       scanf("%d", &ptr[a]);
       }
    for(a=0; a<15; a++)
    {
     printf("\n value at %d is %d",a,ptr[a]);
     //printf("\n value at %d is %lf", a,*(ptr+a));
     }
}
