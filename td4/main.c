#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int main(int argc, char const *argv[]) {

  /* Exercice 1 */
  printf("------Exercice1------\n\n");
  const int MAX_CHAINE = 100;
  char chaine[MAX_CHAINE];
  printf("Saisissez une chaine de caractère, je vais vous l'afficher (100 caractères max)\n\n");
  fgets( chaine , MAX_CHAINE , stdin);
  printf( "\nEt voila !! Vous avez marquez :%s\n" , chaine);

  /* Exercice 2 */
  printf("------Exercice2------\n\n");
  char* chaine1 = "Je suis la chaine 1";
  char* chaine2 = "Je suis la chiane 2";
  printf("La longueur de: \"%s\" est %d\n\n", chaine1 ,longueur(chaine1));

  /*Exercice 3*/
  printf("------Exercice3------\n\n");
  int res = compare( chaine1 , chaine2 );
  printf("Le résultat de la comparaison de \"%s\" et \"%s\" est: %d\n\n" , chaine1 , chaine2 , res);

  /* Exercice 4 */
  printf("------Exercice4------\n\n");
  int isPal = isPalindrome("baoboab");
  printf("%s est il un palindrome? :%d\n\n", "baoboab" , isPal );

  /* Exercice 5 */
  printf("------Exercice5------\n\n");
  char nombre1[] = "12";
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
