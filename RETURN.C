//return by value
#include<stdio.h>
float CI(float,float,int);
void main()
{
  float principal,rate,interest;
  int year;
  printf("\nEnter principal amount:");
  scanf("%f",&principal);
  printf("\nEnter Rate:");
  scanf("%f",&rate);
  printf("\nEnter Year:");
  scanf("%d",&year);
  interest=CI(principal,rate,year);
  printf("\n compound interest:%f",interest);
  }
  float CI(float p,float r,int n)
  {
    float interest;
    interest=p*pow((1+r/100.0),n)-p;
    return interest;
  }

