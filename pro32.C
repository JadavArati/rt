
/*string handling functions
strcpy,strncpy,strcap,strncat,strchr,strrchr,strcmp,strncmp,strspn,strcspn,
strlen,strpbrk,strstr,strtok*/

 /*#include<stdio.h>
#include<string.h>
int main()
{
    char name1[30],name2[20];
    clrscr();
    strncpy (name1,"smt.menaben college",29);
    name1[29]='\0';
    strncpy(name2, name1,10);
    name2[10]='\0';
    printf("name1: %s \n name2: %s",name1,name2);
    return 0;
} */

 /* strspn example
#include<stdio.h>
#include<string.h>
#include<alloc.h>
int main(void)
{
    char*string1="12345677890";
    char*string2="123DC8";
    int length;
    clrscr();
    length=strspn (string1,string2);
    printf("character where strings differ is at position %d \n",length);
    return 0;
}  */


/*strcspn example
#include<stdio.h>
#include<string.h>
#include<alloc.h>
int main(void)
{
  char*string1="1234567890";
  char*string2="747DC8";
  int length;
  length=strcspn(string1,string2);
  printf("character where strings interset is at position %d \n",length);
  return 0;
} */


/*strpbrk example
#include<stdio.h>
#include<string.h>
int main(void)
{

    char*string1="abcdefghijklmnopqrstuvwxyz";
    char*string2="onm";
    char*ptr;
    clrscr();
    ptr=strpbrk(string1,string2);
    if(ptr)
    printf("strpbrk found first character: %c \n",* ptr);
    else
    printf("strpbrk didn't find character in set\n");
    return 0;
} */

/*strstr example
#include<stdio.h>
#include<string.h>
int main(void)
{
   char*str1="Borland International",* str2="I",* ptr;
   ptr=strstr(str1,str2);
   printf("The Substring is: %s \n",ptr);
   return 0;
} */

//strtok example
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (void)
{
  char input[16]="abc|d|xyz";
  char*p;
  clrscr();
  /*strtok places a NULL terminator in front of the token if found*/
  printf("\n string with NULL %s\n",input);
  p=strtok(input, "|");
  if(p) printf("%s\n",p);
  /* A second call to strtok using a NULL as the first parameter returns a pointer to the charactor following the token*/
  printf("\n string with NULL %s \n",input);
  p=strtok(NULL,"|");
  if(p)  printf("%s \n",p);
  printf("\n string with NULL %d \n",input);
  p=strtok(NULL,"|");
  if (p) printf("%s \n",p);
  else
    printf("\n end...");
  printf("\n string is %s",input);
  return 0;

}