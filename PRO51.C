//return by reference..
#include<stdio.h>
float*makearray(int);
void disparray(float *,int);
void initarray(float*,int);
void main(void)
{

  int size;
  float*farr;
  printf("\n Enter size of an array:");
  scanf("%d",&size);
  if(size<=0) size=5;
  farr=makearray(size);
  initarray (farr,size);
  disparray(farr,size);
 }
   float*makearray(int a)
   {
   float*f=(float*)malloc(a*sizeof (float));
   return f;
   }
   void initarray(float*p,int a)
   {
    int i;
    for(i=0; i<a; i++)
    {
     printf("enter float value:");
     scanf("%f",&p[i]);
    }
   }
   void disparray(float*p,int a)
   {
    int i;
    for(i=0; i<a; i++)
    printf("%f",p[i]);
   }