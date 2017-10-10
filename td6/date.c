#include <stdio.h>
#include <stdlib.h>
#include "date.h"



date* create_date( int day , int month , int year){
    date* res = malloc( sizeof(date) );
    res->day = day;
    res->month = month;
    res->year = year;

    return res;
}

void print_date(date* date) {
  printf("%d/%d/%d\n", date->day , date->month , date->year);
}

int compare_date( date* date1 , date* date2 ){
  if ( date1->day == date2->day && date1->month == date2->month && date1->year == date2->year){
    return 1;
  }
  return 0;
}
