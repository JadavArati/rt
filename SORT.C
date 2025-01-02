//sorting of an array....
#include<stdio.h>
void main()
{
  int i,j,arr[10],tmp;
  clrscr();
  for(i=0;i<10;i++)
   {
     printf("\n enter value in array:");
     scanf("%d",&arr[i]);
   }
    printf("\n before sorting....");
    for(i=0; i<10; i++)
    {
      printf("\n value of sorting is %d",arr[i]);
    }
    for(i=0; i<10;i++)
    {
      for(j=i+1; j<10; j++)
      {
	if(arr[i]>arr[j])
	{
	 tmp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=tmp;
	 }
      }
   }
   printf("\n after sorting...");
   for(i=0; i<10; i++)
   {
     printf("\n value of sorting is  %d",arr[i]);
    }
}

