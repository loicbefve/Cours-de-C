#include <stdio.h>
#include <stdlib.h>
#include "person.h"

person* create_person( char* nom , char* prenom , int age ){
  person* res = malloc( sizeof(person) );
  res->nom = nom;
  res->prenom = prenom;
  res->age = age;

  return res;
}

void print_person(person* person){
  printf("Bonjour %s %s, vous avez %d ans.\n" , person->nom , person->prenom , person->age );
}
