//structure,structure within array
#include<stdio.h>
struct student
{
   long int grno;
   char name[20];//structure within array
   char mark[4];//structure within array
   float per;
};
  void main()
  {
     int a;
     char nm[50];
     struct student s1; //s1 is structure variable
     clrscr();
     printf("\ntotal size of structure is %d", sizeof(s1));
     printf("\nEnter grno:");
     scanf("%ld",&s1.grno);
     gets(nm);
     printf("Enter student name:");
     gets (nm);
     strncpy(s1.name,nm,20);
     s1.name[19]='\0';
     printf("Enter marks for four subject");
     for(a=0; a<4; a++)
     {
      scanf("%d",&s1.mark[a]);
     }
    printf("\n----------------------------------\n");
    printf("grno: %ld\t student name:%s",s1.grno,s1.name);
    s1.per=0.0f;
    for(a=0; a<4; a++)
  {
     printf("\n mark %d: %d", a+1,s1.mark[a]);
     s1.per=s1.per+s1.mark[a];
  }
     printf("\n total marks: %f\t\t percentage: %f",s1.per,s1.per/4.0);
}