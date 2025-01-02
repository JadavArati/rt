//return by value  //simple interest
#include<stdio.h>
#include<math.h>
float CI(float,float,int);
void SI(float p, float r, int n);
void main()
{
   float principal,rate,interest;
   int year;
   printf("\n enter principal amount:");
   scanf("%f",&principal);
   printf("\n enter rate:");
   scanf("%f",&rate);
   printf("\n enter year:");
   scanf("%d",&year);
   interest=CI(principal,rate,year);
   printf("\n compount interest:%f",interest);
   SI(principal,rate,year);
   printf("principal amount:%f",principal);

}

  float CI(float p,float r,int n)
  {
   float interest;
   interest=p*pow((1+r/100.0),n)-p;
   return interest;
  }
  void SI(float p, float r,int n)
{
   float interest;
   interest=p*r*n/10000;
   printf("\n simple interest:%f",interest);
   p=1000;
}

