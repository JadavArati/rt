//pyramids of *
#include<stdio.h>
void main()
{
    int x,y,z,space=15;
    clrscr();
    for(x=1; x<6; x++)
    {
      for(z=0; z<space; z++)
      printf("  ");
      space--;
      for(y=1; y<=x; y++)
     {
     printf(" * ");
     }
     printf("\n");
    }
}