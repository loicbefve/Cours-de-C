#include "module.h"

int longueur( char* chaine ){
  int compt = 0;
  char valeur = *chaine;
  while ( valeur != '\0' ){
    compt++;
    valeur = *(chaine+compt);
  }
  return compt+1;
}

int compare ( char* chaine1 , char* chaine2 ){
  int long1 = longueur(chaine1);
  int long2 = longueur(chaine2);
  int minlen = long1;

  if (long1 > long2){
    minlen = long2;
  }
  for ( int i = 0 ; i < minlen ; i++){
    if (*(chaine1+i) < *(chaine2+i)){
      return -1;
    }
    else if (*(chaine1+i) > *(chaine2+i)){
      return 1;
    }
  }
  if ( long1 == long2){
    return 0;
  }
  else if (long1 < long2){
    return -1;
  }
  else {
    return 1;
  }
}

int isPalindrome( char* s ){
  int taille = longueur(s);
  int moitie = taille/2;
  int indexFin = taille-1;
  for( int i = 0 ; i < moitie ; i++){
    printf("%d,%d",i,indexFin);
    if( s[i] != s[indexFin]){
      return 0;
    }
    i++;
    indexFin--;
  }
  return 1;
}
