#pragma once

typedef struct _person{
  char* nom;
  char* prenom;
  int age;
} person;

person* create_person( char* nom , char* prenom , int age );
void print_person(person* person);
