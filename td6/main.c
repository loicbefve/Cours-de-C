#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "person.h"

int main(int argc, char const *argv[]) {

  date* date1 = create_date(13,12,1993);
  print_date(date1);

  date* date2 = create_date(13,12,1993);
  print_date(date2);

  date* date3 = create_date(19,11,1991);
  print_date(date3);

  person* loic = create_person("BEFVE", "Loïc" , 23);
  print_person(loic);

  int isSame = 0;
  isSame = compare_date(date1,date2);
  printf("Est ce que les deux dates sont les mêmes: %d\n", isSame );

  return 0;
}
