//structure,structure within array and array of structure....
#include<stdio.h>
struct student
{
  long int grno;
  char name[20];
  int mark[4];
  float per;
};
   void main()
   {
     int a,x;
     char nm[50];
     struct student s1[10];
     clrscr();
     for(x=0; x<4; x++)
     {
       printf("\n Enter grno:");
       scanf("%d",&s1[x].grno);
       gets(nm);
       printf("Enter student name:");
       gets(nm);
       strncpy(s1[x].name,nm,20);
       s1[x].name[19]='\0';
       printf("Enter marks for four subject");
       for(a=0; a<4; a++)
       {
	scanf("%d",&s1[x].mark[a]);
	}
       }
       for(x=0; x<4; x++)
       {
	printf("\n           \n");
	printf("Grno:%ld \t student Name: %s", s1[x].grno, s1[x].name);
	s1[x].per=0.0f;
	for(a=0; a<4; a++)
	{
	  printf("\n  mark %d: %d",a+1,s1[x].mark[a]);
	  s1[x].per=s1[x].per+s1[x].mark[a];
	}
	 printf("\n Total marks: %f \t \t percentage: %f", s1[x].per,s1[x].per/4.0);
	}
}