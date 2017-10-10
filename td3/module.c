#include "module.h"

int addone ( int nombre ){
  return (nombre+1);
}

int fibonacci( int n ){
  if ( n < 2){
    return n;
  }
  else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int bitAun ( int n ){
  int compt = 0;
  int aUn = 0;

  for ( int i = 0 ; i < sizeof(n)*8 ; i++){
    aUn = n & (1 << i);
    if ( aUn ){
      compt++;
    }
  }
  return compt;
}

tabInt* initTabFromSize( int taille ){
  tabInt *res = malloc(sizeof(tabInt));
  res->taille = taille;
  res->tableau = malloc( taille * sizeof(int) );
  return res;
}

tabInt* initTabFromString( char *s ){
  int taille = 0;
  while( s[taille] != '\0'){
      taille++;
  }
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

void sommeTableauSame( tabInt *tab1 , tabInt *tab2 , tabInt *result ){
  for( int i = 0 ; i < tab1->taille ; i++){
    result->tableau[i] = tab1->tableau[i] + tab2->tableau[i];
  }
}
