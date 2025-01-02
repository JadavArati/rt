//oposite pyramid
#include<stdio.h>
void main()
{
   int i,j;
   clrscr();
   for(i=1;i<6;i++)
   {
	 for(j=i;j>0;j--)
	{
    printf("%d ",j);
   }
	  printf("\n");
   }
}

