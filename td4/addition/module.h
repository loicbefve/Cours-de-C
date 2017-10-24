#pragma once

//Struct
typedef struct tabInt tabInt;

struct tabInt{
  int taille;
  int *tableau;
};

int longueur( char* chaine );
tabInt* initTabFromSize( int taille );
tabInt* initTabFromString( char s[] );
void printTab ( tabInt *tab );
tabInt* add( tabInt* tab1, tabInt* tab2);
int min( int a , int b );
int max( int a , int b );
int isBigger( tabInt* tab1 , tabInt* tab2);
int indexBigger( tabInt* tab1 , tabInt* tab2);
