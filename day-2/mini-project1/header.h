#ifndef header_h
#define header_h

#define liver 20

extern  char titres[liver][50];
extern   char auteurs[liver][50];
extern  float prix[liver];
extern   int quantites[liver];
extern    int counter  ;
extern    int repeter  ;



void Ajouter();
void Afficher();
void Rechercher();
void modifierQ() ;
void Supprimer();
void Total();

#endif