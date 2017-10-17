tabInt* initTabFromSize( int taille ){
  tabInt *res = malloc(sizeof(tabInt));
  res->taille = taille;
  res->tableau = malloc( taille * sizeof(int) );
  return res;
}

tabInt* initTabFromString( char *s ){
  int taille = longueur(s);
  tabInt *res = initTabFromSize(taille);
  for(int i = 0 ; i<taille ; i++){
    char c = s[i];
    res->tableau[i] = atoi(&c);
  }
  return res;
}

void printTab ( tabInt *tab ){
  for(int i =0 ; i < tab->taille ; i++ ){
    printf("%d",tab->tableau[i]);
  }
  printf("\n");
}

tabInt* add( tabInt* tab1, tabInt* tab2){
  //Je récupère les tailles utiles (sans zéros intitiaux) de mes 2 tabInt
  int trueTaille1 = tailleSansZero(tab1) , trueTaille2 = tailleSansZero(tab2);
  //Je récupère le min et le max
  int* tailles = maxMinSansZero(tab1,tab2);
  int tailleMax = tailles[0], tailleMin = tailles[1];

  //Je crée mon vecteur résultats
  tabInt *tabRes = initTabFromSize(tailleMax+1);

  //Je crée un triCurseur
  triCurs* curseurs = initTriCurs( (tab1->taille)-1, (tab2->taille)-1, (tabRes->taille)-1 );

  int retenue = 0 , sommeDigit = 0;

  for(int i=0 ; i<tailleMin ; i++){
    sommeDigit = tab1->tableau[curseurs->curs1] + tab2->tableau[curseurs->curs2] + retenue;
    retenue = 0;
    if(sommeDigit >= 10){
      //si on dépasse 10
      tabRes->tableau[curseurs->cursRes] = sommeDigit - 10;
      retenue = 1;
    }
    else{
      //si non
      tabRes->tableau[curseurs->cursRes] = sommeDigit;
    }
    //Je décrémente mes curseurs
    decremTriCurs(curseurs);
  }
  tabRes->tableau[curseurs->cursRes] = retenue;
  for(int j=0 ; j<(tailleMax-tailleMin)-1 ; j++){

  }
  return tabRes;
}

int* maxMinSansZero(tabInt* tab1 , tabInt* tab2){
  /* Retourne un tableau d'entier [max,min] des 2 tabInt sans prendre en compte
  les éventuels 0 précédents le nombre réel et un boolean pour savoir si
  l'ordre a été inversé*/
  int* res = malloc(3*sizeof(int));
  trueTaille1 = tailleSansZero(tab1);
  trueTaille2 = tailleSansZero(tab2);
  if(trueTaille2 >= trueTaille1){
    res[0] = trueTaille2;
    res[1] = trueTaille1;
    res[2] = 1;
  } else{
    res[0] = trueTaille1;
    res[1] = trueTaille2;
    res[2] = 0;
  }
  return res
}

int tailleSansZero (tabInt* tab){
  /* Retourne le nombre de 0 en première position sur un tabInt*/
  int compt = 0
  while(tab->tableau[compt] == 0){
    compt++;
  }
  return (tab->taille-compt);
}

triCurs* initTriCurs( int a , int b , int c ){
  triCurs* res = malloc(sizeof(triCurs));
  triCurs->curs1 = a;
  triCurs->curs2 = b;
  triCurs->cursRes = c;
  return res;
}

void decremTriCurs( triCurs* tri){
  (triCurs->curs1)--;
  (triCurs->curs2)--;
  (triCurs->cursRes)--;
}
