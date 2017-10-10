#include "chaine.h"

int mylen( char chaine[] ){
  int compt = 0;
    while ( chaine[compt] != '\0'){
      compt++;
    }
  return compt;
}

int concatenation ( char chaineOne[], char chaineTwo[], char res[200]){

  int tailleChaineOne = 0, tailleChaineTwo = 0 , index = 0;

  tailleChaineOne = mylen(chaineOne);
  tailleChaineTwo = mylen(chaineTwo);

  for ( int i = 0 ; i < tailleChaineOne ; i++){
    res[index++] = chaineOne[i];
  }
  for ( int i = 0 ; i < tailleChaineTwo ; i++){
    res[index++] = chaineTwo[i];
  }
  res[index] = '\0';
  return 0;
}
