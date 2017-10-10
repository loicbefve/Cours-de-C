#include "module.h"

int addone ( int nombre ){
  return (nombre+1);
}

int fibonacci( int n ){
  if ( n < 2){
    return n;
  }
  else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int bitAun ( int n ){
  int compt = 0;
  int aUn = 0;

  for ( int i = 0 ; i < sizeof(n)*8 ; i++){
    aUn = n & (1 << i);
    if ( aUn ){
      compt++;
    }
  }
  return compt;
}
