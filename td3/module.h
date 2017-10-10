//Include
#pragma once
#include <stdio.h>
#include <stdlib.h>

//Struct
typedef struct tabInt tabInt;
struct tabInt{
  int taille;
  int *tableau;
};

//Prototype
int addone ( int nombre );
int fibonacci( int n );
int bitAun ( int n );
tabInt* initTabFromSize( int taille );
tabInt* initTabFromString( char s[] );
void sommeTableauSame( tabInt *tab1 , tabInt *tab2 , tabInt *result );
void printTab ( tabInt *tab );
