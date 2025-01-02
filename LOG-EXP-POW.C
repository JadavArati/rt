//log,exp and pow function
#include<math.h>
#include<stdio.h>
#include<conio.h>
main (void)
{
      double d,val;
      double base,expo;
      clrscr();
      printf("\n enter a real value:");
      scanf("%lf",&d);
      val=log(d);// logarithm of d
      printf("\n log (%lf)=%lf",d, val);
      printf("\n enter base value:");
      scanf("%lf",&base);
      printf("\n enter exponent:");
      scanf("%lf",&expo);
      val=pow(base,expo);
      printf("\n base %lf of expo %lf=%lf", base,expo,val);
      printf("\n value of e^%lf=%lf", expo,exp(expo));
      return 0;
 }
