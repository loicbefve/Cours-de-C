#include <stdio.h>
#include <stdlib.h>
#include "modules.h"

int main(int argc, char const *argv[]) {

  /* Exercice 1: Longueur d'un char* */
  int taille = 0;
  char* chaine = "test";
  taille = longueur(chaine);
  printf("La taille de ma chaîne \"%s\" est: %d\n", chaine,  taille);

  /* Exercice 2 */
  char chaine2[] = "Je suis une chaine avec 5 e";
  int taille2 = 0;
  taille2 = longueur(chaine2);
  char* destination = malloc(taille2 + 1);
  copy( chaine2 , destination , taille2 );
  printf("chaine1:%s    chaine2:%s\n" , chaine2 , destination);
  int nomE = nombreDeE ( chaine2 );
  printf("Il y a %d e dans ma chaine\n" , nomE );

  /* Exercice 3: */
  char* chaineDepart = "Je suis la chaine de départ";
  int tailleChaine = longueur(chaineDepart);
  char* chaineArrive = malloc(tailleChaine+1);
  copy( chaineDepart , chaineArrive , tailleChaine );
  *chaineArrive = 'T';
  printf("Chaine modifiée: %s\n" , chaineArrive);


  return 0;
}
