#include "main.h"

int main(int argc, char const *argv[]) {

  char chaineTestOne[] = "Je suis la chaine 1, ";
  char chaineTestTwo[] = "Et moi la chaine 2!";
  char concat[200];

  concatenation( chaineTestOne , chaineTestTwo, concat);

  printf("%s\n", concat );
  return 0;
}
