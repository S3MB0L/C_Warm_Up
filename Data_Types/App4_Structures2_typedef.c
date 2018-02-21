#include <stdio.h>
#include <string.h>

typedef struct persons
{
  char first_name[50];
  char last_name[50];
  char location[50];
  char company[50];
  char email[50];
  char phone[50];
  unsigned int age;
}person;

void print_person(person x);

void main(void)
{
  person person_1;
  person_1.age=23;
  strcpy(person_1.company,"Uludag University");
  strcpy(person_1.email,"ugur@ozkan.com");
  strcpy(person_1.first_name,"Ugur");
  strcpy(person_1.last_name,"Ozkan");
  strcpy(person_1.location,"Gorukle, Bursa");
  strcpy(person_1.phone,"+909001002030");

  print_person(person_1);
  
}

void print_person(person x)
{
    printf("Name     %s %s\n",x.first_name,x.last_name);
    printf("Age      %d\n",x.age);
    printf("E-mail   %s\n",x.email);
    printf("Company  %s\n",x.company);
    printf("Location %s\n",x.location);
    printf("Phone    %s\n",x.phone);
}
