//transpose of matrix
#include<stdio.h>
#define row 3
#define col 4
void main()
{
   int mat[row][col],tmat[col][row],i,j;
   printf("\n enter values for matrix\n");
   for(i=0; i<row; i++)
   {
   printf("\n enter %d integer values",col);
   for(j=0; j<col; j++)
    {
     scanf("%d ",&mat[i][j]);
    }
   }
    for(i=0; i<row; i++)
   {
     printf("\n");
     for(j=0; j<col; j++)
      {
	printf("%4d",mat[i][j]);
      }
   }
   printf("\n transpose of matrix\n");
   for(i=0; i<row; i++)
   {
    for(j=0;j<col; j++)
    {
      tmat[j][i]=mat[i][j];
    }
   }
   for(i=0; i<col; i++)
   {
    printf("\n");
    for(j=0; j<row; j++)
    {
     printf("%4d",tmat[i][j]);
    }
   }
}
