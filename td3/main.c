#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int main(int argc, char const *argv[]) {
  int a = 16, b=0;
  int resFib = 0;

  b = addone(a);
  printf("La fonction addone à ajouter 1 à %d ce qui fait %d\n", a, b);

  resFib = fibonacci(10);
  printf("Le résultat de fibonacci de 10 est %d\n", resFib);

  int d = 124;
  int comptUn = 0;
  comptUn = bitAun(d);
  printf("Dans %d il y a %d bits à 1\n", d , comptUn);

  tabInt *tab1=initTabFromString("123455475993");//, *tab2=initTabInt(3), *tabRes=initTabInt(3);

  printTab(tab1);

//  int tab2[] = {2,3,4,5};
//  int resultat[4];
//  sommeTableauSame(tab1,tab2,resultat,4);
//  printf( "J'additionne tab1 = {%d,%d,%d,%d} à tab2 = {%d,%d,%d,%d}\n" , tab1[0],tab1[1],tab1[2],tab1[3],tab2[0],tab2[1],tab2[2],tab2[3]);
//  printf("Le résultat est: ");
//  printf( "%d , %d , %d , %d\n" , resultat[0] , resultat[1] , resultat[2] , resultat[3] );
  return 0;
}
