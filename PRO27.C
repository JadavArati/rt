//table of 1 to 10
#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j;
      clrscr();
      for(i=1; i<11; i++)
      {
       for(j=1; j<=5; j++)
       {
	printf("%d * %d = %d ",j,i,j*i);
       }
      printf("\n");
      }
      printf("========================================\n");
      for(i=1; i<11; i++)
      {
      for(j=6; j<=10; j++)
      {
       printf("%d * %d = %d ",j,i,j*i);
      }
      printf("\n");
      }
      getch();

}