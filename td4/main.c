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
  tabInt *tab1=initTabFromString("123455475993");//, *tab2=initTabInt(3), *tabRes=initTabInt(3);
  printTab(tab1);


  return 0;
}
