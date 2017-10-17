#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /* Exercice 5 */
  printf("------Exercice5------\n\n");
  char nombre1[] = "1200000";
  char nombre2[] = "09";
  printf( "Je fait l'addition: %s + %s\n" , nombre1 , nombre2 );
  //Utilisation de lastructure adéquate
  tabInt *tab2 = initTabFromString(nombre1);
  tabInt *tab3 = initTabFromString(nombre2);
  //Calcul du résultat
  tabInt *tabRes = add( tab2 , tab3);
  printf("Le résultat est: ");
  printTab(tabRes);


  return 0;
}
  return 0;
}
