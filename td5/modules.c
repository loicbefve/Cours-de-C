#include "modules.h"

int longueur( char* chaine ){
  int compt = 0;
  char valeur = *chaine;
  while ( valeur != '\0' ){
    compt++;
    valeur = *(chaine+compt);
  }
  return compt;
}

void copy( char char1[] , char* char2 , int taille){
  for ( int i = 0 ; i < taille+1 ; i++){
    *(char2+i) = char1[i];
  }
}

int nombreDeE ( char* chaine ){
  char valeur = *chaine;
  int comptE = 0;
  int pos = 0;
  while ( valeur != '\0'){
    if ( valeur == 'e'){
      comptE++;
    }
    pos++;
    valeur = *(chaine + pos);
  }
  return comptE;
}
