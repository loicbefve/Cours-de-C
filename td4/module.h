#pragma once
#include <stdio.h>

//Struct
typedef struct tabInt tabInt;
struct tabInt{
  int taille;
  int *tableau;
};

//Prototype
int compare ( char* chaine1 , char* chaine2 );
int longueur( char* chaine );
int isPalindrome( char* s );
tabInt* initTabFromSize( int taille );
tabInt* initTabFromString( char s[] );
void sommeTableauSame( tabInt *tab1 , tabInt *tab2 , tabInt *result );
void printTab ( tabInt *tab );
