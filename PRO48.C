//user difined function. no return and with agument list
#include<stdio.h> //preprocessor or directives
void SI(float p,float r,int n);
void main(void)
{
  float principal,rate;
  int year;
  clrscr();
  printf("\nEnter principal Amount:");
  scanf("%f",&principal);
  printf("Enter Rate of Interest:");
  scanf("%f",&rate);
  printf("Enter year:");
  scanf("%d",&year);
  //calling SI function to ealcute interest
  SI(principal,rate,year);//call by value and no return.
  printf("principal amount: %f",principal);
}
  void SI(float p,float r,int n)
{
   float interest;
   interest=p*r*n/100.0;
   printf("\n simple interest : %f",interest);
   p=1000;
}

