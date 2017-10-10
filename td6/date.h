#pragma once

typedef struct _date{
  int day;
  int month;
  int year;
} date;

date* create_date( int day , int month , int year);
void print_date(date* date);
int compare_date( date* date1 , date* date2 );
