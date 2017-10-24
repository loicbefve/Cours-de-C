#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int main(int argc, char const *argv[]) {
  /* Exercice 5 */
  printf("------Fonction d'addition-----\n\n");
  char nombre1[] = "01200000";
  char nombre2[] = "09";
  printf( "Je fait l'addition: %s + %s\n" , nombre1 , nombre2 );
  //Utilisation de la structure adéquate
  tabInt *tab2 = initTabFromString(nombre1);
  tabInt *tab3 = initTabFromString(nombre2);
  //Calcul du résultat
  tabInt *tabRes = add( tab2 , tab3);
  printf("Le résultat est: ");
  printTab(tabRes);

  return 0;
}
