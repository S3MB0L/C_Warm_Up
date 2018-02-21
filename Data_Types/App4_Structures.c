#include <stdio.h>
#include <time.h>

struct __tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};
void print_date_time(struct __tm **x);

int main()
{
  long timer;
  struct __tm *tinfo;

  timer = time(NULL);
  tinfo=localtime(&timer);

  print_date_time(&tinfo);

  return 0;
}
void print_date_time(struct __tm **x)
{

  printf("Date= %02d/%02d/%02d\n", (*x)->tm_mday,(*x)->tm_mon+1,(*x)->tm_year+1900);
  printf("Time= %02d:%02d:%02d\n", (*x)->tm_hour,(*x)->tm_min,(*x)->tm_sec);


}
