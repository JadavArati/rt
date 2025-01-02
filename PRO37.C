//write a program code mergin two array.
#include<stdio.h>
#define size1 5
#define size2 7
void main()
{
   int arr1[size1],arr2[size2],arr3[size1+size2],i,j;
   clrscr();
   printf("\n enter %d integers for arr1",size1);
   for(i=0; i<size1; i++)
   {
    scanf("%d ", &arr1[i]);
   }
   printf("\n enter %d integer for arr2",size2);
   for(j=0; j<size2; j++)
   {
     scanf("%d ",&arr2[j]);
   }
   printf("\n value of arr1");
   for(i=0; i<size1; i++)
   {
     printf("%d ", arr1[i]);
   }
   printf("\n value of arr2");
   for(j=0; j<size2; j++)
   {
     printf("%d ",arr2[j]);
   }
   for(i=0; i<size1; i++)
    arr3[i]=arr1[i];
   for(j=0; j<size2; j++)
    arr3[i++]=arr2[j];
     printf("\n value of array......\n");
  for(i=0; i<(size1+size2); i++)
    printf("%d ",arr3[i]);
}
