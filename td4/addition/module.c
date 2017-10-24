#include <stdio.h>
#include <stdlib.h>
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

tabInt* initTabFromSize( int taille ){
  tabInt *res = (tabInt*) malloc(sizeof(tabInt));
  res->taille = taille;
  res->tableau = (int*) malloc( taille * sizeof(int) );
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

  //Je créé un tableau de tabInt*
  tabInt** tableautabInt = (tabInt**) malloc(2*sizeof(tabInt*));
  *tableautabInt = tab1;
  *(tableautabInt+1) = tab2;

  //Je récupère la position du plus grand:
  int indexBig = indexBigger(tab1,tab2);
  int indexSmall = 1-indexBig;

  tabInt *maxi = tableautabInt[indexBig];
  tabInt *mini = tableautabInt[indexSmall];

  //Je crée mon vecteur résultats
  tabInt *tabRes = initTabFromSize(maxi->taille+1);

  int retenue = 0 , sommeDigit = 0;
  int cursMini = mini->taille-1;
  int cursMaxi = maxi->taille-1;
  int cursRes = tabRes->taille-1;

  //Quand j'ai les deux tab + retenu
  for(int i=0 ; i<mini->taille ; i++){
    sommeDigit = mini->tableau[cursMini] + maxi->tableau[cursMaxi] + retenue;
    retenue = 0;
    if(sommeDigit >= 10){
      //si on dépasse 10
      tabRes->tableau[cursRes] = sommeDigit - 10;
      retenue = 1;
    }
    else{
      //si non
      tabRes->tableau[cursRes] = sommeDigit;
    }
    cursMini--;
    cursMaxi--;
    cursRes--;
  }

  //quand y'a plus que 1 tab et les retenues
  for(int j = 0 ; j< ((maxi->taille)-(mini->taille)) ; j++){
    sommeDigit = maxi->tableau[cursMaxi] + retenue;
    retenue = 0;
    if(sommeDigit >= 10){
      //si on dépasse 10
      tabRes->tableau[cursRes] = sommeDigit - 10;
      retenue = 1;
    }
    else{
      //si non
      tabRes->tableau[cursRes] = sommeDigit;
    }
    cursMaxi--;
    cursRes--;
  }
  //A la fin
  tabRes->tableau[cursRes] = retenue;

  return tabRes;
}

int indexBigger( tabInt* tab1 , tabInt* tab2){
  if(tab1->taille > tab2->taille){
    return 0;
  }
  return 1;
}
