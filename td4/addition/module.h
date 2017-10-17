
//Struct
typedef struct tabInt tabInt;
struct tabInt{
  int taille;
  int *tableau;
};

typedef struct triCurs triCurs;
struct triCurs{
  int curs1;
  int curs2;
  int cursRes;
};

tabInt* initTabFromSize( int taille );
tabInt* initTabFromString( char s[] );
void printTab ( tabInt *tab );
tabInt* add( tabInt* tab1, tabInt* tab2);
int* maxMinSansZero(tabInt* tab1 , tabInt* tab2);
int tailleSansZero (tabInt* tab);
triCurs* initTriCurs( int a , int b , int c );
void decremTriCurs( triCurs* tri);
