
//time and date in ascii string....
//asctime example
#include<string.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  struct tm t;
  int i;
  char str[80];
  time_t ct;
  time(&ct);
  clrscr();
//smple loading of tm structure
  t.tm_sec=1; //seconds*/
  t.tm_min=30;
  t.tm_hour=9;
  t.tm_mday=22;
  t.tm_mon=11;
  t.tm_year=56;
  t.tm_wday=4;
  t.tm_yday=0;
  t.tm_isdst=0;
  strcpy(str,asctime(&t));
  printf("%s\n",str);
  printf("\n current date and time is %s",ctime (&ct));
  randomize();
  printf("\n ten random numbers from 0 to 1000\n\n");
  for(i=0; i<10; i++)
     printf("%d\n", rand() %1000);
     return 0;
}