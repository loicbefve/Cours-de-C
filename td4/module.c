#include "module.h"

int longueur( char* chaine ){
  int compt = 0;
  char valeur = *chaine;
  while ( valeur != '\0' ){
    compt++;
    valeur = *(chaine+compt);
  }
  return compt;
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
    if( s[i] != s[indexFin]){
      return 0;
    }
    indexFin--;
  }
  return 1;
}

tabInt* initTabFromSize( int taille ){
  tabInt *res = malloc(sizeof(tabInt));
  res->taille = taille;
  res->tableau = malloc( taille * sizeof(int) );
  return res;
}

tabInt* initTabFromString( char *s ){
  int taille = longueur(s);
  tabInt *res = initTabFromSize(taille);
  for(int i = 0 ; i<taille ; i++){
    char c = s[i];
    res->tableau[i] = atoi(&c);
  }
  return res;
}

void printTab ( tabInt *tab ){
  for(int i =0 ; i < tab->taille ; i++ ){
    printf("%d",tab->tableau[i]);
  }
  printf("\n");
}

tabInt* add( tabInt* tab1, tabInt* tab2){
  int taille = tab1->taille;
  tabInt *tabRes = initTabFromSize(taille+1);
  int indiceFin = taille-1;
  int retenue = 0 , sommeDigit = 0;
  for(int i=0 ; i<taille ; i++){
    sommeDigit = tab1->tableau[indiceFin] + tab2->tableau[indiceFin] + retenue;
    retenue = 0;
    if(sommeDigit >= 10){
      tabRes->tableau[indiceFin+1] = sommeDigit - 10;
      retenue = 1;
    }
    else{
      tabRes->tableau[indiceFin+1] = sommeDigit;
    }
    indiceFin--;
  }
  tabRes->tableau[0] = retenue;
  return tabRes;
}
