#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int main(int argc, char const *argv[]) {

  /* Exercice 1 */
  const int MAX_CHAINE = 100;
  char chaine[MAX_CHAINE];
  printf("Saisissez une chaine de caractère, je vais vous l'afficher (100 caractères max)\n\n");
  fgets( chaine , MAX_CHAINE , stdin);
  printf( "\n\nEt voila !!\n%s\n" , chaine);

  /* Exercice 2 */
  char* chaine1 = "Je suis la chaine 1";
  char* chaine2 = "Je suis la chiane 2";
  printf("La longueur de: \"%s\" est %d\n\n", chaine1 ,longueur(chaine1));

  /*Exercice 3*/
  int res = compare( chaine1 , chaine2 );
  printf("Le résultat de la comparaison de \"%s\" et \"%s\" est: %d\n" , chaine1 , chaine2 , res);

  /* Exercice 4 */
  int isPal = isPalindrome("Baobab");
  printf("%s est il un palindrome :%d\n", "baoboab" , isPal );


  return 0;
}
