//[acos,asin,atan,ceil,cos,div,exp.
//fabs,floor,fnod,log,madf,pow,sin,squrt]
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.1415
void main()
{

   double cvalue,svalue,acvalue,asvalue,ipart,fract,quot;
   div_t both;

   int x,y;
   clrscr();
   x=20; y=3;
   cvalue=cos(30*pi/180);
   svalue=sin(45*pi/180);
   printf("\n cos value for angle 30 is%lf", cvalue);
   printf("\n cos value for angle 45 is%lf", svalue);
   asvalue=180/pi*acos(cvalue);
   asvalue=180/pi*asin(svalue);
   printf("\n acos value for %lf is %lf",cvalue,acvalue);
   printf("\n asin value for %lf is %lf",svalue,asvalue);
   cvalue=12.55;
   printf("\n celling of %lf is %lf",cvalue,ceil(cvalue));
   printf("\n florming of %lf is %lf",cvalue,floor(cvalue));
   printf("\n exponetial value for %lf is %lf",cvalue,exp(cvalue));
   printf("\n absoulate value for %lf is %lf",-cvalue,fabs(-cvalue));
   printf("\n %lf divide %lf then remainder is %lf", cvalue,svalue);
   printf("\n natural log of %lf is %lf",svalue,log(svalue));
   fract=modf(cvalue,&ipart);
   printf("\n for the number %lf the fraction part is %lf and integer part is %lf", cvalue,fract,ipart);
   printf("\n power of 3.2 to 4 is %lf",pow(3.2,4.0));
   printf("\n square root of 4.5 is %lf", sqrt(4.5));
   both=div(x,y);
   printf("\n numerator is %d, denonitor is %d, qurtient is %d and remainder is %d",x,y,both,quot,both.rem);   }