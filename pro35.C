//array declaration and defination
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i;
    clrscr();
    for(i=0; i<10; i++)
      printf("\n index is %d and value is %d", i, arr[i]);
    //assignment of an array
    for(i=0; i<10; i++)
    arr[i]=i*i;
    /* displaying of an array */
    printf("\n index is %d and value is %d", i, arr[i]);
    printf("\n array address is %x", arr);
}





