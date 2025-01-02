//call by reference(pointer)
#include<stdio.h>
void darray(int*);
void swap(int*,int*);
void main(void)
{
  int*arr;
  int x,a,b;
  darray(arr);
  //displaing array.
  clrsrc();
  for(x=0; x<10; x++)
  {
   printf("%d",arr[x]);
  }
   printf("\n Entervalue of a:");
   scanf("%d",&a);
   printf("Enter value of b:");
   scanf("%d",&b);
   printf("\n Before swapping....values are:%d and %d",a,b);
   swap(&a,&b);
   printf("\n After swapping....values are: %d and %d", a,b);
   }
    void darray(int*p)
   {
    int x;
    p=(int *)malloc(10*sizeof(int));
    for(x=0; x<10; x++)
    p[x]=0;
   }
    void swap(int*p1,int*p2)
    {
     int c;
     c=*p1;
     *p1=*p2;
     *p2=c;
}
