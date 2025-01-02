//write a program sorting value
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,tmp,arr[6];
    clrscr();
    for(i=0; i<6; i++)
    {
      printf("\n enter value:");
      scanf("%d",&arr[i]);
    }
      printf("\n Before sorting....");
      for(i=0; i<6; i++)
    {
      printf("%d ", arr[i]);
    }
     for(i=0; i<5; i++)
     {
      for(j=i+1; j<6; j++)
       {
	if (arr[i]>arr[j])
	{
	  tmp=arr[i];
	  arr[i]=arr[j];
	  arr[j]=tmp;
	}
     }
   }
     printf("\n enter after sorting....");
     for(i=0; i<6; i++)
     {
      printf("%d ",arr[i]);
     }
     return 0;
}
