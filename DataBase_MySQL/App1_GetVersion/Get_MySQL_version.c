#include <stdio.h>
#include <mysql/mysql.h>

int main(void)
{
  MYSQL *con = mysql_init(NULL);
  if(con==NULL)
  {
     fprintf(stderr, "%s\n", mysql_error(con));
  }
  printf("MySql client version: %ld\n",mysql_get_client_info());

  exit(0);
}
